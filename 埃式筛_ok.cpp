#include <bits/stdc++.h>
using namespace std;
bool prs[10000005];//list 1=heshu;0=pr
void Erato(int n)
{
	prs[0]=1;prs[1]=1;
	int m=floor(sqrt(n));
	for(int i=2;i<=m;i++)//2~sqrt(m)
	{
		if(!prs[i]){
			for(int j=i*i;j<=n;j+=i)//j=ki
				prs[j]=1;
		}
	}
}
int main ()
{
	int x,y;
	cin>>x>>y;
	Erato(x);
	while(y)
	{
		int tf;
		cin>>tf;
		if(prs[tf])	cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
		y--;
	}
	return 0;
}
