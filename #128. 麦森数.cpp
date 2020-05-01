#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int ans[100000]={1,1};
int base[100000]={1,2};

void times(int *a,int *b,int *c){
    int t[600]={0};
    for(int i=1;i<=a[0];i++){
        int jw=0;
        for(int j=1;j<=b[0];j++){
            int w = i+j-1;
            t[w] += a[i]*b[j]+jw;
            jw = t[w]/10;
            t[w]%=10;
        }
        t[i+b[0]] += jw;
    }
    t[0] = a[0]+b[0];
    while(t[t[0]]==0 && t[0]>1) t[0]--;
    t[0] = t[0]>500 ? 500 : t[0];
    for(int i=t[0];i>=0;i--){
        c[i]=t[i];
    }
    for(int i=c[0];i>=1;i--)
        printf("%d",c[i]);
    printf("\n");

}

void ksm(int n){
    while(n){
        if(n%2==1){
            times(ans,base,ans);//ans = ans*base;
        }
        times(base,base,base);//base = base * base;
        n/=2;
    }
    //完毕 ans即为答案
}
int main(){
    int n;
    cin>>n;
    ksm(n);
    ans[1]-=1;
    long long ws = floor((1.0*n*log(2)) /log(10)) +1;
    printf("%lld\n",ws);
    for(int i=500;i>=1;i--){
        printf("%d",ans[i]);
        if(i%50==0) printf("\n");
    }
    return 0;
}