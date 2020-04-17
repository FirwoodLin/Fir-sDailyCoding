#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,b,c,n,s;
	for(n=100;n<=999;n++)
	{
		a=n/100;
		b=(n%100)/10;
		c=n%10;
		if((pow(a,3)+pow(b,3)+pow(c,3))==n) cout<<n<<endl;
		
	}
	return 0;
}
