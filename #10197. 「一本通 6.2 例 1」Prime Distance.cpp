#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

typedef long long ll;
bool np[47000];
ll pr[5000];
bool v[1000000 + 5];

int Er(int n)
{
	int m = floor(sqrt(n));
	np[1] = np[0] = 1;
	for (int i = 2; i <= m; i++)
	{
		if (!np[i])
		{
			for (int j = i * i; j <= n; j += i)
				np[j] = 1;
		}
	}
	int cnt = 0;
	for (int i = 2; i <= 46999; i++)
	{
		if (!np[i])
			pr[++cnt] = i; //[1,cnt];
	}
	return cnt;
}

void test(ll n[],int cnt){
	for(int i=1;i<=cnt;i++)
		printf("%ld\t",n[i]);
}

void err(){
	system("pause");
}
int main()
{
	int cnt = Er(47000);
	// test( pr , cnt);
	//预处理完毕 ，素数装载完成 : [1 , cnt];
	long long l, r;
	while (scanf("%ld%ld", &l, &r) != EOF)
	{
		for(int i=0;i<=100000;i++){
			v[i]=0;
		}
		// for(int i=0;i<=100000;i++) if(v[i]!=0) printf("i=%d %d",i,v[i]),err();
		if (l == 1)
			v[0] = 1;
		for (ll i = 1; i <= cnt && pr[i] <= r; i++)
		{
			for (ll j = (l - 1) / pr[i] + 1; j <= r / pr[i]; j++)
			{
				if (j > 1)
					v[j * pr[i] - l] = 1;
			}
		}

		bool fst = 1;
		int posl = 0, posr = 0;			 //左、右指针的位置
		int dst = 0;					 //distance
		int c1 = 0, c2 = 0, dst_c = 1e9; //closest 1,2:差值最小的两个指针;最大的差值 max difference
		int d1 = 0, d2 = 0, dst_d = -1;  //most distant 1,2:差值最大的两个相邻指针; 差值
		for (int i = l - l; i <= r - l; i++)
		{
			if (!v[i])
			{ //i号是质数
				if (fst)
					posl = i;

				dst = i - posr;

				if (!fst && dst < dst_c)
				{ //不是第一个素数 && 差值比之前大
					// printf("\n最小差值changed：i=%d posr=%d\n",i,posr);
					c1 = posr;
					c2 = i;
					dst_c = dst;
				}

				if (!fst && dst > dst_d)
				{ //不是第一个素数 && 差值比之前大
					// printf("\n最大差值changed：i=%d posr=%d\n",i,posr);
					d1 = posr;
					d2 = i;
					dst_d = dst;
				}
				posr = i;
				fst = 0;
			}
		}

		if (posl == posr)
		{
			printf("There are no adjacent primes.\n");
		}
		else
		{
			printf("%d,%d are closest, %d,%d are most distant.\n",
				   c1 + l, c2 + l, d1 + l, d2 + l);
		}
	}
	return 0;
}
