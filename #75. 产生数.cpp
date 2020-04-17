#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int t[20][20];//t[i][j] : i->j;t[i][0]:total turn num
char s[10];
long long ans=1;
int main(){
    int n,k;
    cin>>n>>k;
    int l=0;
    while(n!=0){
        s[++l]=n%10;
        n/=10;
    }
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        t[x][++t[0]]=y;
    }
    for(int i=0;i<=9;i++){//i
        if(t[i][0]==0) continue;
        for(int k=1;k<=t[i][0];k++){//i -> ?
            int 
            for(int j = t[t[i][k]][])//? -> ???
        }
    }

}