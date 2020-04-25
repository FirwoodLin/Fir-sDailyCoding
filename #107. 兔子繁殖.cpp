#include <iostream>

using namespace std;
typedef unsigned long long ull;
ull a[70];
ull f(ull n){
    if(a[n]) return a[n];
    return a[n]=f(n-1)+f(n-2);
}
int main(){
    ull n;
    cin>>n;
    a[1]=1;
    a[2]=1;
    cout<<f(n);
    return 0;
}