#include <iostream>
using namespace std;
int main ()
{
	int i/*��������*/;
	int K/*Ҫ������*/ ;
	int d=0/*����������*/;
	int s=0/*Ǯ��*/;
	cin>>K;
	for(i=1;d<K;i++)
	{
		s+=i*i;
		d+=i;
	}
	if(d>K) s-=(d-K)*(i-1);
	cout<<s	;
}
