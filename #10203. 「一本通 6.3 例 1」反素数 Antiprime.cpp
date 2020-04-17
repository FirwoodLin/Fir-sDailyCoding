#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int p[]={0,2,3,5,7,11,13,17,19,23,29},ans;
long long n,s,sl;

void dfs(long long x, long long y, long long b,long long z){
    if(x==11) return ;
    long long i,k=1;
    for(i=1;i<=b;i++){
        k*=p[x];
        if(y*k>n) return ;
        if(z*(i+1) == sl && y*k<s) s=y*k;
        if(z*(i+1) > sl){
            s=y*k;
            sl=z*(i+1);
        }
        dfs(x+1,y*k,i,z*(i+1));
    }
}

int main(){
    scanf("%lld",&n);
    dfs(1,1,31,1);
    printf("%lld",s);
    return 0;
}