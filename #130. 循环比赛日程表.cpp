#include <iostream>
#include <cstdio>
#include <cmath>
int a[8000][8000];

int m;
void sol(int zsx,int zsy,int yxx,int yxy){
    if(yxy-zsx>4){
        
    }
}

int main(){
    std::cin>>m;
    int n=pow(2,m);
    sol(m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}