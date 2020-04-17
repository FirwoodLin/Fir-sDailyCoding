#include <iostream>
using namespace std;
int main ()
{
	int h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,th/*TaoH*/,a=30/*charH*/,ans=0/*appleÊýÄ¿*/;
	cin>>h1>>h2>>h3>>h4>>h5>>h6>>h7>>h8>>h9>>h10>>th;
	if(h1<=th+30) ans++;
	if(h2<=th+30) ans++;
	if(h3<=th+30) ans++;
	if(h4<=th+30) ans++;
	if(h5<=th+30) ans++;
	if(h6<=th+30) ans++;
	if(h7<=th+30) ans++;
	if(h8<=th+30) ans++;
	if(h9<=th+30) ans++;
	if(h10<=th+30) ans++;
	cout<<ans;
	return 0;
	
	
	
}
