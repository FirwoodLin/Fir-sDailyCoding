#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	cout<<"10.0/6.0="<<10.0/6<<"��fixed"<<endl;
	cout<<"10.0/6.0="<<10.0/6<<fixed<<setprecision(8)<<"��fixed"<<endl;
	cout<<"10.0/6.0="<<10.0/6<<"��fixed"<<endl;
	cout<<"100.0/6.0="<<100000000.0/6<<fixed<<setprecision(0)<<"��fixed"<<endl;
	return 0;
}
