#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    freopen("uva11059.txt","r",stdin);
    freopen("mine.txt","w",stdout);
    long long n,cnt=0;
    while(scanf("%lld",&n)!=-1){
        int a[50];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        long long maxans=0;
        for(int i=1;i<=n;i++){
            long long product=a[i];
            for(int j=i+1;j<=n;j++){
                product*=a[j];
                if(product==0) break;
                maxans=max(product,maxans);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",++cnt,maxans);
    }   
    return 0;
}
