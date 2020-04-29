#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
double f(double x){
    return exp(x*log(2))+exp(x*log(3))-exp(x*log(4));
}
int main(){
    int p,q;
    cin>>p>>q;
    double l=f(p),r=f(q);
    while(fabs(l-r)>1e-10){
        if()
    }
    printf("%10lf",(l+r)/2.0);
}