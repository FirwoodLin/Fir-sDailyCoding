#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
long long a[30];
int main(){
    int n,cnt=1;
    while(scanf("%d",&n)!=-1){
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long maxn=0;
        for(int i=0;i<n;i++){
            for(long long ans=1,j=i;j<n;j++){
                ans*=a[j];
                maxn=max(maxn,ans);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",cnt,maxn);
        cnt++;
    }
    return 0;
}
