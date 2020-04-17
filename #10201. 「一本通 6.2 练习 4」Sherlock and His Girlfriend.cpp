#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const int N=1e5+5;
int a[N];

void E(int n){
    a[0]=a[1]=1;
    int m = floor(sqrt(n));
    for(int i=2;i<=m;i++){
        if(!a[i]){
            for(int j=i*i;j<=n;j+=i){
                a[j]=1;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    E(n+3);
    if(n>=3) printf("2\n");
    else printf("1\n");

    for(int i=2;i<=n+1;i++){
        if(a[i]) printf("2 ");
        else printf("1 ");

    }
    return 0;

}