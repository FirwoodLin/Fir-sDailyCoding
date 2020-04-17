#include <bits/stdc++.h>
//#define MAXN 5000 + 5
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int oi[n+5]={0};//2n+1 closed;2n open;
//	for(int i=1;i<=MAXN;i++)
//	cout<<oi[i]<<endl;
	int m;
	cin>>m;
	for(int i=1;i<=m;i++)//crowd
	{
		for(int j=1;j<=n;j++)//lamp
		{
			if(j%i==0) oi[j]+=1;
		}
	}
	for(int no=1;no<=n;no++)
	{
		if(no!=1 && oi[no]%2==1) cout<<",";
		if(oi[no]%2==1) cout<<no ;
	}
	return 0;
}
