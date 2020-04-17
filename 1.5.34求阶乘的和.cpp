#include <bits/stdc++.h>
using namespace std;
long long  f (int x)
{
	if(x==0) return 1;
	else return x*f(x-1);
}
int main ()
{
	int n;
	long long e=0;
	cin>>n;
	for(int x=n;x>0;x--)
	{
		e+=f(x);
	}
	printf("%lld",e);
}
