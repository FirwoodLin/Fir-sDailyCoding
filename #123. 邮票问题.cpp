#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int val[100+10];//面值
int cost[25500+100];//所需张数
int main(){
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>val[i];
        cost[val[i]]=1;
    }
    if(val[1]!=1){
        printf("0");
        return 0;
    }
    sort(val+1,1+val+m);
    for(int i=2;;i++){
        for(int j=1;j<=m && val[j]<=i ;j++){
            if(cost[i]==0 || cost[i]>cost[i-val[j]]) cost[i]=cost[i-val[j]]+1;
        }
        if(cost[i]>n){
            printf("%d",i-1);break;
        }
    }

    return 0;
}