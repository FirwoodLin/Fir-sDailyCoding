#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a;
	int sum=0;
	int cnt=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		int x=i;
		cnt=0;
		while (x)
		{
			if(x%10==7) cnt++;
			x/=10;
		}
		if(i%7!=0&&cnt==0) sum+=i*i;
	}
	cout<<sum;
	return 0;
	
}
