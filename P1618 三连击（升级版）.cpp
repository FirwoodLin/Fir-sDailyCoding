#include <iostream>
#include <cstdio>
using namespace std;

bool notok(int x){
	return x>999 || x<100;
}
bool repeat(int q,int w,int e){
	int a[15]={0},t=3;
	while(t--){
		a[q%10]++;a[w%10]++;a[e%10]++;
		q/=10;w/=10;e/=10;
	}
	for(int i=1;i<=9;i++){
		if(a[0]!=0) return 1;
		if(a[i]!=1) return 1;
	}
	return 0;
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	bool none=1;
	
	for(int i=123;i<=999;i++){
		if ((i*b)%a!=0 || (i*c)%a!=0)//can not divide exactly
			continue;
			
		int j=i*b/a,k=i*c/a;
		
		if(notok(j) || notok(k))//>1000 || <100
			continue;
		
		if(repeat(i,j,k))//have repeat num
			continue;			
		
		none=0;	
		printf("%d %d %d\n",i,j,k);
	}
	
	if(none) printf("No!!!\n");
	
	return 0;
}
