#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int quickpow(int a,int b,int n){
    int ret=1;
    while (b)
    {
        if(b%2==1) ret = ret*a%n;
        a=a*a%n;
        b>>=1;
    }
    return ret;
}

int main(){
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    printf("%d",quickpow(a,b,n));
    return 0;
}
