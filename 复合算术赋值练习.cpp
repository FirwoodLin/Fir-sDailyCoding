#include<iostream>
using namespace std;
int main ()
{
	int Q=100;//存款总量
	//要求：存20，花50，全部取出
	//依次输出余额
	Q+=20;
	cout<<Q<<endl;
	Q-=50;
	cout<<Q<<endl;
	Q=0;
	cout<<Q<<endl;
	return 0;
	
}
