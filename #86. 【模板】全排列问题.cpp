#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
bool v[20];
int a[20],n;
void solve(int pos){
    if(pos == n+1){
        for(int i=1;i<=n;i++)
            printf("    %d",a[i]);
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            a[pos]=i;
            v[i]=1;
            solve(pos+1);
            v[i]=0;
        }
    }
}

int main(){
    scanf("%d",&n);
    solve(1);
    return  0;
}