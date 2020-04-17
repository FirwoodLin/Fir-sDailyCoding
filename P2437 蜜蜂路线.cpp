#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int MAXN = 1000+1;

int ans[MAXN+3][MAXN];

void add(int t){
    int jw=0;
    int ws=max(ans[t-1][0],ans[t-2][0]);
//    printf("ans[%d][0]=%d\n",t,ws);
    for(int i=1;i<=ws;i++){
        ans[t][i]=ans[t-1][i]+ans[t-2][i]+jw;
        jw=ans[t][i]/10;
        ans[t][i]%=10;
    }
    if(jw){
        ans[t][++ws]=jw;
    }
    ans[t][0]=ws;
}

void write(int a[]){
    for(int i=a[0];i>=1;i--){
        printf("%d",a[i]);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int t=m-n+1;
    
    if(t<=2){
        printf("1");
        return 0;
    }
    
    ans[1][0]=ans[2][0]=1;
    ans[1][1]=ans[2][1]=1;
    for(int i=3;i<=t;i++){
	    add(i);
//    	printf("%d calced\n",i);
	}
//    printf("ans ws : %d",ans[t][0]);
    for(int i=ans[t][0];i>=1;i--)
    	printf("%d",ans[t][i]);
    return 0;
}
