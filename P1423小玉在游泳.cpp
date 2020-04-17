#include <iostream>

using namespace std;
int main ()
{
	double goal,v=2,sum,a=0.98;
	int step;
	cin>>goal;
	for(step=0;sum<goal;step++)
	{
		sum+=v;
		v=0.98*v;
	}
	cout<<step;
	return 0;
	
}
