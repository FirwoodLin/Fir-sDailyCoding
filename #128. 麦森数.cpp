#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;
int a[1000+10]={0},b[1000+10]={0};//ans;base;

void times(int *a,int *b,int *c){
    int t[600]={0};
    for(int i=1;i<=a[0];i++){
        int jw=0;
        for(int j=1;j<=b[0];j++){
            t[i+j-1] += a[i]*b[j]+jw;
            jw = t[i+j-1]/10;
            t[i+j-1] %= 10;
        }
        t[i+b[0]] = jw;
    }
    t[0]=a[0]+b[0];
    while(t[t[0]]==0 && t[0]>1) t[0]--;
    if(t[0]>500) t[0]=500;
    for(int i=t[0];i>=0;i--)
        c[i]=t[i];
}
void ksm(int x){
    while(x){
        if(x%2 == 1){
            times(b,a,b);
        }
        times(a,a,a);
        x/=2;
    }
}
void print(int num[]){
    for(int i=500;i>=1;i--){
        printf("%d",num[i]);
        if(i%50==0)
            printf("\n");
    }
}
void init(){
    a[0]=b[0]=1;
    a[1]=2;
    b[1]=1;
}
int main(){
    int p;
    cin>>p;
    cout<<floor(log(10)*(p-1)/log(2))+1<<endl;
    init();
    ksm(p);
    print(a);
    return 0;
}