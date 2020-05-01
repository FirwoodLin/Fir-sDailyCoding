#include<cstdio>
#include <cstring>
#include<iostream>
#define ll long long 
using namespace std;
const int maxn=5e5+5;
//下面就是 归并排序求逆序对 的过程==
int a[100],b[100],c[100];

void times(int *a,int *b,int *c){
    int t[600];
    memset(t,0,sizeof(t));
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

int main(){
    scanf("%d%d",&a[0],&b[0]);
    getchar();
    // cout<<"jifasfofsio";
    for(int i=a[0];i>=1;i--)
        a[i] = getchar()-'0';
    for(int i=b[0];i>=1;i--)
        b[i] = getchar()-'0';
    times(a,b,c);
    for(int i=c[0];i>=1;i--)
        printf("%d",c[i]);

    return 0;
    
}