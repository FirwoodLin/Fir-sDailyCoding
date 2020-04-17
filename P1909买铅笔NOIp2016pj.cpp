#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
	int n;
	int a1,a2,b1,b2,c1,c2;//1：数量/包，2：单价 
	int m1,m2,m3;
	cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
	if(n%a1==0) m1=n/a1*a2;
	else m1=(n/a1+1)*a2;
	if(n%b1==0) m2=n/b1*b2;
	else m2=(n/b1+1)*b2;
	if(n%c1==0) m3=n/c1*c2;
	else m3=(n/c1+1)*c2;
	if(m1>=m2&&m1>=m3&&m2>=m3) cout<<m3<<endl;
	else if(m1>=m2&&m3>=m2&&m1>=m3)  cout<<m2<<endl;
	else if(m2>=m1&&m2>=m3&&m1>=m3) cout<<m3<<endl;
	else if(m2>=m1&&m2>=m3&&m3>=m1) cout<<m1<<endl;
	else if(m3>=m1&&m3>=m2&&m1>=m2) cout<<m2<<endl;
	else if(m3>=m1&&m3>=m2&&m2>=m1) cout<<m1<<endl;
	return 0;
}
