#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
const int N=100000000;
bool v[N+5];

void E(int n){
//	int n=N;
	v[1]=v[0]=1;
	int m=floor(sqrt(n));
	for(int i=2;i<=m;i++){
		if(!v[i]){
			for(int j=i*i;j<=n;j+=i){
				v[j]=1;
			}
		}
	}
}

bool hw(int x){
	int num=0,y=x;
	while(y){
		num*=10;
		num+=y%10;
		y/=10;
	}
	if(num==x) return 1;
	else return 0;
}
int os(int x){
	if(x>=1000 && x<9999) return 9999-x;
	if(x>=100000 && x<999999) return 999999-x;
	if(x>=10000000 && x<99999999) return 99999999-x;
	return 10000000+1;
}
int main(){
//	freopen("a.txt","r",stdin);
	int a,b;
	scanf("%d%d",&a,&b);
	if (b>=10000000)
        b=9999999;
	E(b);
	int i=a;
	while(i<=b){
		int t=os(i);
		if(t!=10000000+1){
//			printf("i+%d=%d\n",t,i+t);
			i+=t;
			continue;
		}
		if(!v[i] && hw(i)) printf("%d\n",i);
		i++;
	}
	return 0;
}
