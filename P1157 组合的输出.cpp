#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int n,r;
int ans[100];

void sol(int pos){
    int i;
    if(pos>r){
        for(int i=1;i<=r;i++){
            printf("%3d",ans[i]);
        }
        printf("\n");
        return;
    }
    for(int i=ans[pos-1]+1;i<=n;i++){
        ans[pos]=i;
        sol(pos+1);
    }
}
int main(){
    cin>>n>>r;
    sol(1);
    return 0;
}