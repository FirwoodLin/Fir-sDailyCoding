#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node{
    int L,R;
    bool del;
}a[100000+5];

int main(){
    #ifdef fir
    freopen("P1160_2.myout.txt","w",stdout);
    freopen("P1160_2.in.txt","r",stdin);
    #endif

    int n,k,p;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        scanf("%d%d",&k,&p);
        if(p==1){//right
            a[i].L=k;
            a[i].R = a[k].R;

            a[a[k].R].L = i;
            a[k].R=i;
        }
        else{//left
            a[i].L=a[k].L;
            a[i].R=k;

            a[a[k].L].R=i;
            a[k].L=i;
        }
    }
    //delete start
    int m,del;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&del);
        if(a[del].del==1) continue;
        a[del].del = 1;
        a[a[del].L].R=a[del].R;
        a[a[del].R].L=a[del].L;
    }
    //find the most left
    int left;
    for(int i=1;i<=n;i++){
        if(a[i].del) continue;
        if(a[i].L==0 && a[i].R!=0){
            left=i;break;
        }
    }
    printf("%d",left);
    for(;;){
        if(a[left].R==0) break;
        printf(" %d",a[left].R);
        left=a[left].R;
    }
    printf("\n");
    return 0;
}