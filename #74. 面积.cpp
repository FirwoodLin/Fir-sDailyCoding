#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int s[15][15];
int out_num,one_num;

void bfs(int x,int y){
    if(x<0 || y<0 || y>11 || x>11) return;
    if(s[x][y]) return;
    out_num++;
    s[x][y]=1;
    // printf("%d,%d has benn 1ed\n",x,y);
    bfs(x-1,y);
    bfs(x+1,y);
    bfs(x,y+1);
    bfs(x,y-1);
}
void test(){
    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++)
            cout<<s[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>s[i][j];
            if(s[i][j]) one_num++;
        }
    }
    bfs(0,0);
    out_num-=44;
    // test();
    cout<<100-out_num-one_num;
}