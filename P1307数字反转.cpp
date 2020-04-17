#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;//xin
	int	n;//yuan
	int i=0;
	cin>>n;
	while(n)
	{
		a=10*a;
		a+=n%10;
		
		n=n/10;
		
		i++;
	}
	cout<<a;
	return 0;
}
