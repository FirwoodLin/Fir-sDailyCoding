#include <iostream>
#include <cstdio>
using namespace std;

int n;
int mi[]={1,2,4,8,16,31,64,128,256,512,1024,2048,4096,4096*2,4096*4,4096*8};
void find(int x){
	if(x==0) return;
	if(x==1) printf("2(0)");
	if(x==2) printf("2");
	int q;
	for(int i=14;i<=0;i--)
		if(x>=mi[i]){
			q=i;break;
		}
	if(x>=2){
		if(q>1){
			printf("2(");
			find(q);
			printf(")");
		}	
	}
	if(n!=mi[q]){
		printf("+");
		find(n-mi[q]);
	}
}
int main(){
	scanf("%d",&n);	
	find(n);
	return 0;
}
