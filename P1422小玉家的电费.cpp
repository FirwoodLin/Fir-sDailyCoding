#include <iostream>
using namespace std;
int main ()
{
	int e;
	double ans;
	cin>>e;
	if(e<=150) ans=e*0.4463;
	if(150<e&&e<=400) ans=150*0.4463+(e-150)*0.4663;
	if(e>400) ans=150*0.4463+250*0.4663+(e-400)*0.5663;
	ans=(int)((ans*10)+0.5)/10.0;
	cout<< ans<<endl;
	return 0;
}
