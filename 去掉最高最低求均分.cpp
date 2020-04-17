#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int  main ()
{
	int n	;
	cin>>n;
	double mark,sum,avr,maxn=0,minn=11;
	for(int i=0;i<=n;i++)
	{
		cin>>mark;
		minn=min(mark,minn);
		maxn=max(maxn,mark);
		sum+=mark	;
	}
	avr=(double)(sum-minn-maxn)/(n-2);
	printf("%.2f",avr);
	return 0;
}
