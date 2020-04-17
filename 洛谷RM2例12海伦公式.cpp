#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
	int a,b,c;
	double p,S;
	cin>>a>>b>>c;
	p=(double)(a+b+c)/2;
	S=(double)sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<S;
	return 0;
}
