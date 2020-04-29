#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
double a,b,c,d;
double f(double x){
    return a*x*x*x + b*x*x + c*x + d;
}
double sol(double l,double r){
    if(r-l < 0.001)
        return l;
    double mid=(l+r)/2.0;
    f(l)*f(mid)<0 ? sol(l,mid) : sol(mid,r);
}
double ans[5];
int cnt=0;
int main(){
    cin>>a>>b>>c>>d;
    for(int i=-100;i<=100;i++){
        if(f(i)*f(i+1) < 0 && i<100){
            ans[++cnt] = sol(i,i+1);
        } else if(f(i)==0){
            ans[++cnt]=i;
        }
    }
    for(int i=1;i<=3;i++){
        printf("%.2lf",ans[i]);
        if(i!=3) cout<<" ";
    }
    return 0;
}