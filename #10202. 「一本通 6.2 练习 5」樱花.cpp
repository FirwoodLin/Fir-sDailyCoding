#include <iostream>
#include <cstdio>
#include <cmath>
#include <bitset>
using namespace std;

typedef long long ll;
bitset<1000000 + 10> notPr;
int pr[1000000], cnt, c[1000000] /*指数*/;
const int M = 1e9 + 7;

void E(int n)
{
    // printf("e srarfsdafasdfasdf\n");
    for (int i = 2; i <= n; i++)
    {
        if (notPr[i] == 0)
            pr[++cnt] = i;
        for (int j = 1; j <= cnt && i * pr[j] <= n; j++)
        {
            notPr[i * pr[j]] = 1;
            if (i % pr[j] == 0)
                break;
        }
    }
    // printf("e srarfsdafasdfasdf\n");
}

void calc(int n)
{
    for (ll i = 1; i <= cnt; i++)
    {
        for (ll j = pr[i]; j <= n || j * pr[i] <= n; j *= pr[i])
        {
            c[i] += n / j;
        }
    }
    //div end
    //cnt begin
    long long ans = 1;
    for (int i = 1; i <= cnt; i++)
    {
        ans *= (2 * c[i] % M + 1) % M;
        ans %= M;
        // printf("ans= %ld \n",ans);
    }
    printf("%ld", ans);
}
int main()
{
    int n;
    scanf("%d", &n);
    E(n);
    calc(n);
    return 0;
}