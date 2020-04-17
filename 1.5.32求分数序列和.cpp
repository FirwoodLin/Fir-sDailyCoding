#include <bits/stdc++.h>
using namespace std;
int main ()

{
	int q=2,p=1,n;
	cin>>n;
	double sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=double(q)/p;
		q=q+p;
		p=q-p;
	}
	printf("%.4lf",sum);
	return 0;
	
}
