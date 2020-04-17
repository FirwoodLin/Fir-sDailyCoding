#include <bits/stdc++.h>
using namespace std;
const int len=200+5;
void add1(int num[]){
	num[1]++;
	for(int i=1;i<=num[0];i++){
		if(num[i]>=10) {
			num[i]-=10;
			num[i+1]++;
		}
	}
	int cnt=0;
	while(num[++cnt] != 0);cnt--;
	num[0]=cnt;
}
void mul(int A[],int B[]){
	int tem[len];memset(tem,0,sizeof(int)*len);
	for(int i=1;i<=A[0];i++){
		int jw=0;
		for(int j=1;j<=B[0];j++){
			tem[i+j-1]+=A[i]*B[j]+jw;
			jw=tem[i+j-1]/10;
			tem[i+j-1]%=10;
		}
		tem[i+B[0]]=jw;
	}
	tem[0]=A[0]+B[0];
	while (tem[tem[0]]==0 && tem[0]>1) tem[0]--;
	memcpy(A,tem,sizeof(int)*len);
}
int res[len]={1,1};int tc[len]={1,1};
int main ()
{
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		mul(res,tc);
		add1(tc);
	}	
	for(int i=res[0];i>=1;i--){
		printf("%d",res[i]);
	}
	printf("\n");
	return 0;
}
