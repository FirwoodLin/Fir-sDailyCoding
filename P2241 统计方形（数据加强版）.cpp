#include <iostream>
#include <cstdio>

using namespace std;
typedef unsigned long long ull;
int main(){
    ull n,m;
    cin>>n>>m;
    if(n<m){ull t=n;n=m;m=t;}//make : n>m
    ull zfx=0,jx=0,cfx=0;//正方形 矩形 长方形
    for(ull i=1;i<=m;i++){
        zfx+=(n-i+1)*(m-i+1);
    }//zfx
    jx=(n*(n+1)/2) * (m*(m+1)/2);
    cfx=jx-zfx;
    cout<<zfx<<" "<<cfx;
    return 0;
}