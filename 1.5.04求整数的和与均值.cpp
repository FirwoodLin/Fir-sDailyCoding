#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,n,sum=0;
	cin>>n;
	for(int i=n;i>0;i--)
	{
		cin>>a;
		sum+=a;
	}
	printf("%d %.5lf",sum,(double)sum/n);
	return 0;
}
