#include <iostream>

using namespace std;
int main ()
{
	int cost[15]={0};
	int num=1;
	int total=0/*×Ü»¨·Ñ*/;
	
	for(int i=1;i<=12;i++)
	{
		cin>>cost[num];
		total+=cost[num];
		cost[num]=300+cost[num-1]-cost[num];
		if(cost[num]<0)
		{
			cout<<"-"<<num;
			return 0;
		}
		cost[num]%=100;
		num++;
	}
	cout<<(3600-cost[num-1]-total)*12/10+cost[num-1];
	return 0;
	
	
}
