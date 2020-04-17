#include <iostream>
using namespace std;
int main ()
{
	int n=0,K;
	double S=0;
	cin>>K;
	while (K>=S)
	{
		n++,S+=1.0/n;
	}
	cout<<n;
	return 0;
	
}
