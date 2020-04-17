#include <iostream>
#include <cstdio>

using namespace std;
bool s[10000][10000];
int n,m,ans;
void del(int x,int y){
    if(x<=0 || y<=0 || x>n || y>m)
        return;
    s[x][y]=0;
    if(s[x-1][y]==1){
        s[x-1][y]=0;
        del(x-1,y);
    }
    if(s[x+1][y]==1){
        s[x+1][y]=0;
        del(x+1,y);
    }
    if(s[x][y-1]==1){
        s[x][y-1]=0;
        del(x,y-1);
    }
    if(s[x][y+1]==1){
        s[x][y+1]=0;
        del(x,y+1);
    }
}
void gc(){
    getchar();
    // getchar();
}
int main(){
    cin>>n>>m;
    gc();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char c=getchar();
            if(c=='0') continue;
            s[i][j]=1;
        }
        gc();
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]){
                ans++;
                del(i,j);
            }
        }
    }
    cout<<ans;
    return 0;
}