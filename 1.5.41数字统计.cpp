#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b;
	int cnt=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		int x=i;
		while (x)
		{
			if(x%10==2) cnt++;
			x/=10;
		}
	}
	cout<<cnt;
	return 0;
	
}
