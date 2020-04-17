#include<iostream>
using namespace std;
int main ()
{
	//鸡兔同笼，35头，94脚。各几只？
	int ji;
	int tu;
	tu=(94-35*2)/2;
	ji=35-tu;
	cout<<"鸡数量"<<ji<<endl<<"兔子数量"<<tu;
	return 0;
}
