#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
	int n;//����
	double m1,m2;//Ǯ
	scanf("%d",&n);
	m1=3*0.88*n;//A�̳� 
	m2=24*(n/9)+3.0*(n%9);//B�̳� 
	cout<<m1<<" "<<m2<<endl;
	if(m1>m2) printf("B�̳�");
	else printf("A�̳�");
	return 0;
	 
}
 
