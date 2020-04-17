#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,h;
	char c;
	int sx;
	cin>>h>>a>>c>>sx;
	switch (sx)
	{
	case 0:
		{
		for(int j=1;j<=h;j++)
			for(int i=1;i<=a;i++)
			{
				if(j==h&&i==1) cout<<endl;
				if(j==h||j==1) cout<<c;
				else 
				{
					if(i==1) cout<<endl;
					if(i==1||i==a) cout<<c;
						else cout<<" ";
				}
			}
		break;
		}
	case 1:	
		{
		for(int j=1;j<=h;j++)
			{
			for(int i=1;i<=a;i++)
		 		cout<<c;
		 	cout<<endl;
			}		
		}
	}
	return 0;	
}
