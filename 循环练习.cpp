#include <iostream>
using namespace std;
int main ()
{
	int L,i;cin>>L;
	for(i=1;i<L+1;i++)
	{
		cout<<"Today,I ate "<<i<<" apple";
		if(i>1) cout<<"s";
		cout<<"."<<endl;
	}
	return 0;
}

