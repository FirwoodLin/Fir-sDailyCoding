#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,f;
	int t;
	cin>>a>>b>>c>>d;
	t=c*60+d-a*60-b;
	e=t/60;
	f=t%60;
	cout<<e<<" "<<f<<endl;
	return 0;
	
	
}
