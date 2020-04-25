#include <iostream>

using namespace std;
typedef unsigned long long ull;
struct BigNum{
    ull d[5000];
}a[5000+5];

ull f(ull n){
    if(a[n]) return a[n];
    return a[n]=f(n-1)+f(n-2);
}
int main(){
    ull n;
    cin>>n;
    a[1]=1;a[2]=2;
    cout<<f(n);
    return 0;
}