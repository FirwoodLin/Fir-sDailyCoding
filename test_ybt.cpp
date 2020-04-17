#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstring>
using namespace std;

int v[100000000+5];

void prs(int n){
	memset(v,0,sizeof(v));
	for(int i=2;i<=n;i++){
		if(v[i]) continue;
		for(int j=i;j<=n/i;j++)
			v[i*j]=1;
	}
}

int main(){
	prs(100000000);
}
