#include<bits/stdc++.h>
using namespace std;
int len=20000;
void init(int num[],int N)
{
	memset(num,0,sizeof(int)*N);
	char s[len];
	scanf("%s",s);
	num[0]=strlen(s);
	for(int i=1;i<=num[0];i++)
	{
		num[i]=s[num[0]-i]-'0';
	}
}
void prit(int num[])
{
	for(int i=num[0];i>=1;i--)
		printf("%d",num[i]);
	printf("\n");
}
void sub(int A[],int B[],int C[],int N)
{
	memset(C,0,sizeof(int)*N);
	int i=1; 
	while(i<=A[0]||i<=B[0]){
		C[i]=A[i]-B[i];
		if(C[i]<0){
			A[i+1]--;
			C[i]+=10;
		}
		i++;
	}
	while(C[i]==0 && i>1) i--;
	C[0]=i;
}
int cmp(int n1[],int n2[]){//n1>n2 true
	if(n1[0]>n2[0]) return 1;//>
	else if(n1[0]<n2[0]) return 0;//<
	for(int i=1;i<=n1[0];i++){
		if(n1[i]>n2[i]) return 1;//>
		else if(n1[i]<n2[i]) return 0;//<
	}
	return 2;//==
}
int main()
{
	int A[len],B[len],C[len];
	init(A,len);init(B,len);
	int cr=cmp(A,B);
	bool dyl=1;//result>0
	if(cr==1) sub(A,B,C,len);
	else if	(cr==0) {dyl=0;sub(B,A,C,len);}
	else 	{printf("0\n");return 0; }
	if(dyl==0) printf("-");
	prit(C);
	return 0;
}
