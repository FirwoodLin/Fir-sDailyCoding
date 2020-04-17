#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
	int n;//个数
	double m1,m2;//钱
	scanf("%d",&n);
	m1=3*0.88*n;//A商城 
	m2=24*(n/9)+3.0*(n%9);//B商城 
	cout<<m1<<" "<<m2<<endl;
	if(m1>m2) printf("B商城");
	else printf("A商城");
	return 0;
	 
}
 
