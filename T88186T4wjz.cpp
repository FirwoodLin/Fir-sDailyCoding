#include <iostream>
using namespace std;
int main ()
{
	int n;
	bool a;
	bool o=0;//��0�� 
	int i=1;
	cin>>n;
	while(i<=n)
	{
		cin>>a;
		if(a==0) a=o,o=a;
		else a=!o,o=!o;
		cout<<a;
		i++;
	}
	return 0;
	
	
}
