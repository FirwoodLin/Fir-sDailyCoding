#include <bits/stdc++.h>
using namespace std;
int main (){
	int a;
	int n;
	cin>>n;
	cin>>a;
	int maxn=a,minn=a;
	for(int i=1;i<=n-1;i++)
	{
		cin>>a;
		if(a>maxn) maxn=a;
		if(a<minn) minn=a;
	}
	cout<<maxn-minn;
	return 0;
}
