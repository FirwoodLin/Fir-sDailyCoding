#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int sum=180*(n-2);
	for(int i=1;i<=n-1;i++)
	{
		int a;
		cin>>a;
		sum-=a;
	}
	cout<<sum;
	return 0;
}
