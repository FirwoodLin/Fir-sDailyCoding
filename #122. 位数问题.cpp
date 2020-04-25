#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
const int MX=10000+5,mod=12345;
int j[MX],o[MX];
int main(){
    int n;
    cin>>n;
    j[1]=1;
    o[1]=8;
    for(int i=2;i<=n;i++){
        j[i]=(j[i-1]*9+o[i-1])%mod;
        o[i]=(o[i-1]*9+j[i-1])%mod;
    }
    cout<<o[n];
    return 0;
}