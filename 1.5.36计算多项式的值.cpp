#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,sum=0;
	int n;
	scanf("%f%d",&x,&n);
	for(int i=n;i>=0;i--)
	{
		sum+=pow(x,i);
	}
	printf("%.2f",sum);
	return 0;	
}
