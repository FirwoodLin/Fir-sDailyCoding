#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
const int MAXN=10000+5;
struct queue_fir{
    int x,y,step;
}q[10000+5];
struct point_fir{
    int x,y;
}p[15]={{2,-1},{2,-2},{1,-2},{-1,-2},{-2,-2},{-2,-1},{-2,1},{-2,2},{-1,2},{1,2},{2,2},{2,1}};
point_fir a,b;
bool vis[100+5][100+5]={0};
int ans[100+5][100+5];
// int dx[]={2,2,1, -1,-2,-2, -2,-2,-1, 1,2,2};
// int dy[]={-1,-1,-2, -2,-2,-1, 1,2,2, 2,2,1};
void bfs(int x000,int y000){
    memset(vis,0,sizeof(vis));
    int head=1,tail=1;//头 结束指针
    q[head].x=x000;
    q[head].y=y000;
    q[head].step=0;
    tail++;
    vis[x000][y000]=1;
    while(head<tail){
        int x=q[head].x;
        int y=q[head].y;
        int step=q[head].step;
        if(x==1 && y==1){
            printf("%d\n",step);
            break;
        }
        for(int i=0;i<12;i++){
            int x_new=x+p[i].x;
            int y_new=y+p[i].y;
            if(x_new<=0 || x_new>100 || y_new<=0 || y_new>100 || vis[x_new][y_new]) continue;
            vis[x_new][y_new]=1;
            q[tail].x=x_new;
            q[tail].y=y_new;
            q[tail].step=step+1;
            ++tail;
        }
        ++head;
    }
}
int main(){
    cin>>a.x>>a.y>>b.x>>b.y;
    memset(ans,-1,sizeof(ans));
    bfs(a.x,a.y);
    bfs(b.x,b.y);
    return 0;
}