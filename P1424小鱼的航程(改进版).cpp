#include<iostream>
using namespace std;
int main ()

{
	int d,t,s;//��ʼ���ڣ���ʱ�䣬��·�� 
	cin>>d>>t ;
	switch (d)			
		{
		case 1: case 2: case 3: case 4: case 5:
			if ((d+t)<=5) s=250*t;//��һ��Ȼ��֮�� 
			else if (d+t==7||d+t==6) s=t-(d+t-5)*250;
			else if (d+t>7) s=(((d+t)/7-1)*5+((d+t)%7)+5-d)*250;
		break;
		case 6: case 7:
			if((t-(8-d))%7<=5) s=((t-(8-d))/7)*1250/*����*/+(t-(8-d))%7*250/*��ͷ*/;
			else s=((t-(8-d))/7)*1250+(t-(8-d))%7*250-((t-(8-d))%7-5)*250;
		break;
	
		}
	cout<<s;
	return 0;
	 
}
