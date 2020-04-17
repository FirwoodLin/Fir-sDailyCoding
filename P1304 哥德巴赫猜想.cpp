#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool np[10000+5];
int pr[10000];
void E(int n){
	int m=floor(sqrt(n));
	np[1]=np[0]=1;
	for(int i=2;i<=m;i++){
		if(!np[i]){
			for(int j=i*i;j<=n;j+=i){
				np[j]=1;
			}
		}
	}
//	for(int i=2;i<=n;i++){
//		printf("%d",np[i]);
//	}
}
void fillin(int n){
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(np[i]==0) pr[cnt++]=i;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	E(n);
	fillin(n);
	for(int i=4;i<=n;i+=2){
		for(int j=0;;j++){
			if(!np[i-pr[j]]){
				printf("%d=%d+%d\n",i,pr[j],i-pr[j]);
				break;
			}
		}
	}
	return 0;
}
