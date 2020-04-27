#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
bool v[15];
int a[15],n;
void dfs(int pos){
    if(pos==n+1){
        for(int i=1;i<=n;i++)
            printf("%5d",a[i]);
        printf("\n");
        return ;
    }
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            v[i]=1;
            a[pos]=i;
            dfs(pos+1);
            v[i]=0;
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    return 0;
}