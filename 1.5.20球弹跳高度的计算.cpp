#include <bits/stdc++.h>
using namespace std;
int main (){
	double a;
	cin>>a;
	double  sum=a;
	for(int i=2;i<=10;i++)
	{
		
		sum+=a;
		a/=2;
	}
	cout<<sum<<endl<<a/2;
	return 0;
}
