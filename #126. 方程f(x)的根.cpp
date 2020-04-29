#include <iostream>
#include <cstdio>
#include <cmath>
#define Abs(x) (x>=0 ? x : (-x))
using namespace std;
double f(double x){
    return exp(x*log(2))+exp(x*log(3))-exp(x*log(4));
}

double sol(double l,double r){
    if(r-l < 1e-10)
        return l;
    double mid=(l+r)/2;

    f(l)*f(mid)<0 ? sol(l,mid) : sol(mid,r);
}

int main(){
    double p,q;
    cin>>p>>q;
    printf("%.10lf",sol(p,q));
}