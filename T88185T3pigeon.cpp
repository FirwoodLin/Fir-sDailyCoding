#include <iostream>
#include <cmath> 
#include <cstdio>
using namespace std;
int main ()
{
	int s,v;
	int h,m;
	cin>>s>>v;
	m=480-((ceil(s/(v*1.0)))+10);
	while(m<0)
		m+=24*60;
	
	h=m/60;
	m=m%60;
	//cout<<h<<" "<<m<<endl;
	printf ("%02d",h);
	printf (":");
	printf ("%02d",m);
	return 0;
}
