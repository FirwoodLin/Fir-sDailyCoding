#include <iostream>
using namespace std;
int main ()
{
	unsigned long long min=1,mid=1,max,c;
	cin>>c;
	if(c==1||c==2) cout<<1;
	else 
	{
		for(int i=3;i<=c;i++)
		{
			max=min+mid;
			min=mid,  mid=max;
		}
		cout<<max;
	}
	
	return 0;
	
}
