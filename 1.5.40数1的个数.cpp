#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a;
	int cnt=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		int x=i;
		while (x)
		{
			if(x%10==1) cnt++;
			x/=10;
		}
	}
	cout<<cnt;
	return 0;
	
}
