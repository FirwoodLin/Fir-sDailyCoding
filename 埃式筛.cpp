#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

const int N=10000+5;
bool notPrime[N];
void Erato(int n){
	notPrime[0]=notPrime[1]=1;
	int m=floor(sqrt(n));
	for(int i=2;i<=m;i++){
		if(!notPrime[i]){
			for(int j=i*i;j<=n;j+=i)
				notPrime[j]=1;
		}
	}
}
int main (){
	Erato(10000);
//	for(int i=2;i<=10000;i++){
//		if(notPrime[i]==0){
//			printf("%d\n",i);
//			
//		}
//	}
	for(int i=2;i<=10000;i++){
		printf("%d",notPrime[i]);
	}
}
