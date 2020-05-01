#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
const int MAXN=100;
int x[MAXN],y[MAXN],zhu[MAXN],fu[MAXN],sum;
int n;
//主对角线：左上-右下

void print(){
    if(sum<=2){
        for(int i=1;i<=n;i++)
            printf("%d ",x[i]);
        printf("\n");
    }
    sum++;
}
void sol(int row){
    if(row>n){
        print();
        return ;
    }
    for(int col=1;col<=n;col++){
        if(y[col] || zhu[col+row] || fu[row-col+n])//conquered
            continue;
        x[row] = col;//
        y[col] = zhu[col+row] = fu[row-col+n] = 1;

        sol(row+1);

        y[col] = zhu[col+row] = fu[row-col+n] = 0;
    }
}
int main(){
    cin>>n;
    sol(1);
    // if(sum==0)
        printf("%d\n",sum);
    return 0;
}