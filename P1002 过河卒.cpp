#include <iostream>
using namespace std;
const int MAX=22;
long long f[MAX][MAX];
int ctrl[MAX][MAX];
int n,m,hx,hy;
int d[9][2]={{0,0},{2,1},{1,2},{-2,-1},{-1,-2},{2,-1},{1,-2},{-1,2},{-2,1}};

int main(){
    cin>>n>>m>>hx>>hy;
    for(int i=0;i<=8;i++){
        int x=hx+d[i][0],y=hy+d[i][1];
        if(x<0 || y<0 || x>n || y>m) continue;
        ctrl[x][y]=1;
    }
    f[0][0]=1-ctrl[0][0];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(ctrl[i][j]) continue;
            if(i) f[i][j]+=f[i-1][j];
            if(j) f[i][j]+=f[i][j-1];
        }
    }
    cout<<f[n][m];
    return 0;
}