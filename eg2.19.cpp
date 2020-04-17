#include<iostream>
using namespace std;
int main ()
{
	int x,y,x1,x2,x3;
	cin>>x;
	x1=x/100;
	x2=(x-x1*100)/10;
	x3=x%10;
	y=x3*100+x2*10+x1;
	cout<<x1<<' '<<x2<<' '<<x3<<endl;
	cout<<y<<endl;
	return 0;
}
