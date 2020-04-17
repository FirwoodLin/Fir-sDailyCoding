#include <iostream>
using namespace std;
int main ()
{
	int i/*自增变量*/;
	int K/*要求天数*/ ;
	int d=0/*计算用天数*/;
	int s=0/*钱数*/;
	cin>>K;
	for(i=1;d<K;i++)
	{
		s+=i*i;
		d+=i;
	}
	if(d>K) s-=(d-K)*(i-1);
	cout<<s	;
}
