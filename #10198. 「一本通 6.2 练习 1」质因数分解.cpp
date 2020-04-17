#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
bool np[450000];

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
}
int main(){
	int n;
	scanf("%d",&n);
	int t=ceil(sqrt(n));
	E(t+100);
	int ans=0;
	for(int i=2;i<=t;i++){
		if(!np[i] && !(n%i)){
			ans=i;
			break;
		}
	}
	printf("%d", n/ans);
	return 0;
}
