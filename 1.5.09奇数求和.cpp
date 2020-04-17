#include <bits/stdc++.h>
using namespace std;
int main (){
	int m,n;
	cin>>m>>n;
	if(m%2==0) 	m++;
	if(n%2==0)	n--;
	int sum=0;
	for(int i=m;i<=n;i+=2)
	{
		sum+=i;
	}
	cout<<sum;
	return 0;
}

