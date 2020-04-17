#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int dad[5000+5];
int anc(int x){
    if(dad[x])
        return anc(dad[x]);
    return x;
}
void u(int x,int y){
    x=anc(x);y=anc(y);
    dad[x]=y;
}
void ask(int x,int y){
    x=anc(x);y=anc(y);
    if(x==y) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    int n,m,p;
    cin>>n>>m>>p;
    int x,y;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        u(x,y);
    }
    for(int i=1;i<=p;i++){
        cin>>x>>y;
        ask(x,y);
    }
    return 0;
}