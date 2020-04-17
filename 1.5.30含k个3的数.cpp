#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int m,k;
	int delta=0;
	int cnt=0;
	cin>>m>>k;
	if(m%19==0) delta=1;
	while(m!=0)
	{
		if(m%10==3) cnt++;
		m/=10;
	}
	if(delta & cnt==k)
	cout<<"YES";
	else cout<<"NO";
	return 0;
}
