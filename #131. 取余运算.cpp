#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    long long b,p,k;
    cin>>b>>p>>k;
    long long x=b,xx=p,xxx=k;
    long long ret=1;
    while(p){
        if(p%2==1) ret = ret * b %k;
        b = b*b%k;
        p/=2;
    }
    cout<<x<<"^"<<xx<<" mod "<<xxx<<"="<<ret;
    return 0;
}