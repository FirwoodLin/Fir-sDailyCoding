#include <iostream>
#include <cstdio>

using namespace std;
int res_ori[]={2,3,1,1,3,	1,2,3,1,3,	3,1,2,3,1,	3,3,1,2,1,	1,1,3,3,2};
//1==win 2==draw 3==lose
int res[6][6];
const int N=205;
int arra[N],arrb[N];
int a,b;//round of win

int judge (int ca,int cb){
    switch(res[ca][cb]){
        case 1:{
            a++;break;
        }
        case 3:{
            b++;break;
        }
        default:{
            break;
        }
    }
}

int main(){
    //fill res
    int cnt=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            res[i][j]=res_ori[cnt++];
    }
    //cin
    int n,na,nb;
    scanf("%d%d%d",&n,&na,&nb);
    for(int i=0;i<na;i++){
        scanf("%d",&arra[i]);
    }
    for(int i=0;i<nb;i++){
        scanf("%d",&arrb[i]);
    }
    //judge
    for(int i=0;i<n;i++)
        judge(arra[i%na],arrb[i%nb]);
    //cout
    printf("%d %d",a,b);
    return 0;
}
