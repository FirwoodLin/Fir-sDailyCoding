#include <iostream>
#include <cstdio>
using namespace std;

int mosterSum[90000+6];
int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0' || ch >'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}
int main(){
    int n=read(),m=read();
    // int x;
    for(int i=1;i<=n;i++){
        int x=read();
        mosterSum[i]=mosterSum[i-1]+x;
    }
    // int a,b;
    for(int i=1;i<=m;i++){
        int a=read(),b=read();
        printf("%d\n",mosterSum[b]-mosterSum[a-1]);
    }
}