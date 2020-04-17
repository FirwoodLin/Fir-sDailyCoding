#include <iostream>
using namespace std;
int main ()
{
	int n;
	int i=2;
	cin>>n;
	while(n>=i*i)
	{
		if(n%i==0) break;
		i++;
	}
	cout<<n/i;
	return 0;
}
