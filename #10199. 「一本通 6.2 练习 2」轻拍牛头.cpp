#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;
const int N = 1e6 + 5;
int cow[N],cnt[N], ans[N];

int main()
{
    int n, maxn = -1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &cow[i]);
        cnt[cow[i]]++;
        maxn = max(maxn, cow[i]);
    }

    for (int i = 1; i <= maxn; i++)
        if (cnt[i])
        {
            for (int j = i; j <= maxn; j+=i)
                ans[j] += cnt[i];
        }
    for (int i = 1; i <= n; i++)
        printf("%d\n", ans[cow[i]] - 1);
    return 0;
}