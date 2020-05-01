#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int a[25][25],v[25],ans[25];//第i个工作由ans[i]做
int n;
long long minn = pow(2,60);

void sol(int pos){//第几项工作
    if(pos>n){
        int sum=0;
        for(int i=1;i<=n;i++)//工作
            sum+=a[ans[i]][i];
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }


}