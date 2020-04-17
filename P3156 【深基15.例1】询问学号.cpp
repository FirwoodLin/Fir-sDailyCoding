#include <iostream>
#include <cstdio>
using namespace std;
const int maxn=2e6+5;
int a[maxn];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=m;i++){
        int t;
        scanf("%d",&t);
        printf("%d\n",a[t]);
    }
    return 0;
}