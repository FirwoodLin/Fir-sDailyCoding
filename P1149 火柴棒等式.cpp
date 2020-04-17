#include <iostream>
#include <cstdio>

using namespace std;
int match[10000 + 5]={6,2,5,5,4,5,6,3,7,6};
int ans;

void calc(void){
	for(int i=10;i<=9999;i++)
		match[i]=match[i/10]+match[i%10];
}
//void debug(int a,int b){
//	printf("%d+%d=%d\tans=%d\n",a,b,a+b,ans);
//	ans++;
//}

int main(){
	calc();
//	for(int i=0;i<=200;i++)
//		printf("%d need match=%d\n",i,match[i]);
//	system("pause");
	int n;
	scanf("%d",&n);
	n-=4;
	for(int i=0;i<=999;i++){
		for(int j=0;j<=999;j++){
			if(i==j) continue;
			int sum=i+j;
			if(match[i]+match[j]+match[sum]==n) ans++;
		}
	}
	for(int i=0;i<=999;i++){
		if(match[i]+match[i]+match[i+i]==n) ans++;
	}
	printf("%d",ans);
	return 0;
}
