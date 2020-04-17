#include <iostream>
#include <algorithm>

using namespace std;
typedef unsigned long long ull;
const ull M=6662333; 

ull qp(ull a,ull b,ull m){
    if(b==1) return a%m;

    ull t=qp(a,b/2,m)%m;
    t*=t;t%=m;
    if(b%2==0)
        return t;
    else
        return t*a%m;
}

int main(){
    ull n;
    cin>>n;
    cout<<qp(2,n-1,M);
    return 0;
}
