#include<iostream>
using namespace std;

int main ()
{
	int n;
	int n1,p1,n2,p2,n3,p3;//1：数量/包，2：单价 
	int t1,t2,t3;//total
	int total;
	cin>>n>>n1>>p1>>n2>>p2>>n3>>p3;
	t1=!(n%n1)?n/n1*p1:(n/n1+1)*p1;//if(n%n1==0) t1=n/n1*p1;else t1=(n/n1+1)*p1;
	t2=!(n%n2)?n/n2*p2:(n/n2+1)*p2;//if(n%n2==0) t2=n/n2*p2;else t2=(n/n2+1)*p2;
	t3=!(n%n3)?n/n3*p3:(n/n3+1)*p3;//if(n%n3==0) t3=n/n3*p3;else t3=(n/n3+1)*p3;
	total=t1;
	if(t2<total) total=t2;
	if(t3<total) total=t3;
	cout<<total<<endl;
	cout<<t1<<" "<<t2<<" "<<t3<<endl; 
	return 0;
}
