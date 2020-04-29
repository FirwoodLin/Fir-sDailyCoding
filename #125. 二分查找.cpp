#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000 + 10], n, x;
int ans = -1;

int bin_sc()
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            r = mid;
        else if (a[mid] < x)
            l = mid + 1;
        else if (a[mid] > x)
            r = mid - 1;
    }
    if (l > n || r < 1)
        return -1;
    return a[l] == x ? l : -1;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> x;
    sort(a + 1, a + n + 1);
    cout << bin_sc();
    return 0;
}