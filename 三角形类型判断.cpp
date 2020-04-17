#include <iostream>
using namespace std;
int main ()
{
	double a,b,c;
	double q,w,e;
	double r;
	cin>>a>>b>>c;
	
	if(a>=b&&b>=c) q=a,w=b,e=c;
	if(b>=a&&a>=c) q=b,w=a,e=c;
	if(c>=a&&a>=b) q=c,w=a,e=b;
	if(c>=b&&b>=a) q=c,w=b,e=a;
	if(a>=c&&c>=b) q=a,w=c,e=b;
	if(b>=c&&c>=a) q=b,w=c,e=a;
	if(q>=w+e) cout<<"Not triangle";
	else 
	{
		q=q*q,w=w*w,e=e*e;
		r=q+w;
		if(r<e) cout<<"Obtuse triangle";
		if(r=e) cout<<"Right triangle";
		if(r>e) cout << "Acute triangle";
	} 
	return 0;	
}
