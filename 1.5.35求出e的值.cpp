#include <bits/stdc++.h>
using namespace std;
double f (int x)
{
	if(x==0) return 1;
	else return x*f(x-1);
}
int main ()
{
	int n;
	double e=0;
	cin>>n;
	for(int x=n;x>=0;x--)
	{
		e+=1/f(x);
	}
	printf("%.10lf",e);
}
