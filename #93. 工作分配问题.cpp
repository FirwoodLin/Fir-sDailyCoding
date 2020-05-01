#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int a[25][25],v[25],ans[25];//第i个工作由ans[i]做
int n;
long long minn = pow(2,60);

void sol(int pos,long long  now){//第几项工作
    if(pos>n){
        minn=min(now,minn);
        return;
    }

    for(int i=1;i<=n;i++){
        if(v[i]==0){
            v[i]=1;
            ans[i]=pos;
            now+=a[ans[i]][i];
            if(now<minn)
                sol(pos+1,now);
            now-=a[ans[i]][i];
            v[i]=0;
        }
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    sol(1,0);
    cout<<minn<<endl;
    return 0;
}