#include <bits/stdc++.h>
using namespace std;
int main ()

{
	int i,ans,cnt=0,n,panduan=0;
	cin>>n;
	for(ans=2,cnt=1;cnt<=n;ans++)
	{
		panduan=0;
		for(i=2;i*i<=ans;i++)
		{
			if(ans%i==0) panduan++;
		}
		if(panduan==0) cnt++;
	}
	cout<<ans-1;
	return 0;
}
