#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int cnt=1;
	int a,b=-1;//b是前一天的
	int maxn=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a>b) cnt++;
		else 
		{
			if(cnt>maxn) maxn=cnt;
			cnt=1;
		}
		b=a;	
	}
	cout<<maxn;
	return 0;
}
