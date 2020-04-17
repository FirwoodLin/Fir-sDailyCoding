#include <iostream>
using namespace std;
int main ()
{
	int x;
	cin>>x;
	switch (x)
	{
		case 1: cout<<"Invalid";break;
		case 2: case 4: cout<<"No"<<endl<<"QAQ";break;
		case 3: cout<<"Yes"<<endl<<"QAQ";break;
		case 5: cout<<"qwq"<<endl<<"QAQ";break;
		case 7: cout<<"qwq"<<endl<<"Maybe";break;
		default:
			{
				cout<<"qwq"<<endl;
				cout<<"Maybe";
			}
	}
	
	return 0;
}
