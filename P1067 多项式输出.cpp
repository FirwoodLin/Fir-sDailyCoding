#include <cstdio>
#include <stack>
#include <iostream>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int x;
	for(int i=n;i>=0;i--){
		scanf("%d",&x);
		if(x==0) continue;
		
		if(i!=n && x>0) printf("+");
		else if(x<0) printf("-"),x=-x;
		
		if((x!=1 && x!=-1)||(i==0)) printf("%d",x);
		
		if(i>=1) printf("x");
		if(i>1) printf("^%d",i);
	}
	return 0;
 }
