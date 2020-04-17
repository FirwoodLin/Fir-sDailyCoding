#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	double C,F;
	cin>>F;
	C=(F-32)*5/9.0;
	cout<<fixed<<setprecision(4)<<C;
	return 0;
	
}
