#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
const int N=1e6 + 5;
bool v[N];

void E(int n){
	int m=floor(sqrt(n));
	v[1]=v[0]=1;
	for(int i=2;i<=m;i++){
		for(int j=i*i;j<=n;j+=i)
			v[j]=1;
	}
}
void out(int a, int b, int c){
	printf("%d = %d + %d\n",a,b,c);
}
int main(){
	E(1e6);
	int n;
	while(scanf("%d",&n),n!=0){
		bool flag=1;
		for(int i=3;i<n;i++){
			if(!v[i]){
				if(!v[n-i]){
					out(n,i,n-i);
					flag=0;
					break;
				}
			}
		}
		if(flag) printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}
