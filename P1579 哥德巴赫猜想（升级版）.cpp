#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool comp[20000+5];//composite nums
//1:heshu 0:sushu 
int prs[2500];

void E(int n){
	int m=floor(sqrt(n));
	for(int i=2;i<=m;i++){
		if(comp[i])
			continue;
		for(int j=i*i;j<=n;j+=i)
			comp[j]=1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	E(n);
	//load in
	int cnt=0;//num of pr
	for(int i=2;i<=n;i++){
		if(comp[i]==0) prs[cnt++]=i;
	}
	//work
	int notover=1;
	int ans[5];
	int times=0;
	for(int i=0;i<cnt && notover;i++){
		for(int j=0;j<cnt && notover;j++){
			for(int k=0;k<cnt && notover;k++){
				times++;
				if(prs[i]+prs[j]+prs[k]==n){
					notover=0;
					ans[1]=prs[i],ans[2]=prs[j],ans[3]=prs[k];
				}
			}
		}
	}
//	printf("\n%d\n",times);
	printf("%d %d %d",ans[1],ans[2],ans[3]);
	return 0;
}
