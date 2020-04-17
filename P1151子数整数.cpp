#include <iostream>
using namespace std;
int main ()
{
	int K,a,b,c,d,e,n;
	bool judge=0;
	int p1,p2,p3;
	cin>>K;
	for(n=10000;n<=30000;n++)
	{
		p1=n/100,p2=(n%10000)/10,p3=n%1000;
		if((p1%K)==0&&(p2%K)==0&&(p3%K)==0)
		cout<<n<<endl,judge=1;
	}
	if(judge==0) cout<<"No";
	return 0;
}
