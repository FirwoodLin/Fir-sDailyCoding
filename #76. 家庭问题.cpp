#include <iostream>
#include <cstdio>

using namespace std;
int dad[100+6];
int num_fml,num_max=-1;
int mem[100+6];
int anc(int x){
    if(dad[x]==x) return x;
    return dad[x]=anc(dad[x]);
}
void union2(int x,int y){
    // printf("try to union %d & %d\n",x,y);
    x=anc(x);y=anc(y);
    // printf("find the anc: %d & %d\n",x,y);
    dad[x]=y;
    // printf("success to union %d & %d\n",x,y);
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=k;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        union2(a,b);
    }
    for(int i=1;i<=n;i++){
        if(dad[i]==0) ++num_fml;
    }
    cout<<num_fml<<" ";
    for(int i=1;i<=n;i++){
        ++mem[anc(i)];
    }
    for(int i=1;i<=n;i++){
        num_max=max(num_max,mem[i]);
    }
    cout<<num_max;
}