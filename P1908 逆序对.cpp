#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
const int MAXN=5e5 +10;
long long ans=0;
int a[MAXN],r[MAXN];

void mergesort(int left, int right){
    if(left==right) return;
    int mid=(left+right)/2;
    mergesort(left,mid);
    mergesort(mid+1,right);
    int i=left, j=mid+1;
    int rfoot=left;

    while(i<=mid && j<=right){
        if(a[i]>a[j]){
            ans += (long long)mid -i +1;
            r[rfoot++]=a[j++];
        }
        else{
            r[rfoot++]=a[i++];
        }
    }

    while(i<=mid) r[rfoot++]=a[i++];
    while(j<=right) r[rfoot++]=a[j++];
    for(int i=left;i<=right;i++)
        a[i]=r[i];
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    mergesort(1,n);
    printf("%lld",ans);
    return 0 ;
}
