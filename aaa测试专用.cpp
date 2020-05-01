#include <iostream>
using namespace std;
int a[100000+10], r[100000+10];
int n;
void msort(int s, int t)
{
    if (s == t)
        return;
    //如果只有一个数字则返回，无须排序
    int mid = (s + t) / 2;
    msort(s, mid);                 //分解左序列
    msort(mid + 1, t);             //分解右序列
    
    int i = s/*i:s~mid*/, j = mid + 1/*j:mid+1~t*/, k = s/*r 的下标*/; 
    //接下来合并
    while (i <= mid && j <= t)
    {
        if (a[i] <= a[j])   //顺序正确
            r[k++]=a[i++];
        else                //逆序对出现
            r[k++]=a[j++];
    }
    //放入剩余元素
    while (i <= mid) //复制左边子序列剩余
        r[k++] = a[i++];
    while (j <= t) //复制右边子序列剩余
        r[k++] = a[j++];

    for (int i = s; i <= t; i++)
        a[i] = r[i];
    return;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    msort(1, n);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}