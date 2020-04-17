#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,d;
	cin>>a;
	for(d=1;a>=1;d++)
	{
		a=(floor)(a/2.0);
	}
	cout<<d<<endl;
	return 0;
}
