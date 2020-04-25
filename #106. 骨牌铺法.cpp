#include <iostream>

using namespace std;
typedef unsigned long long ull;
ull a[10000];
ull f(ull n){
    if(a[n]) return a[n];
    return a[n]=f(n-1)+f(n-2)+f(n-3);
}
int main(){
    ull n;
    cin>>n;
    a[1]=1;a[2]=2;a[3]=4;
    cout<<f(n);
    return 0;
}