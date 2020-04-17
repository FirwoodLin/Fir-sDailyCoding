#include <bitset>
#include <iostream>
#include <cstdio>
using namespace std;

bitset<100000000 + 5> notPr;
int pr[5800000], cnt;

void Euler(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!notPr[i])
            pr[++cnt] = i;
        for (int j = 1; j <= cnt && pr[j] * i <= n; j++)
        {
            notPr[i * pr[j]] = 1;
            if (i % pr[j] == 0)
                break;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Euler(n);
    printf("%d", cnt);
    // for(int i=1;i<=cnt;i++){
    // 	printf("%d ",pr[i]);
    // }
    return 0;
}