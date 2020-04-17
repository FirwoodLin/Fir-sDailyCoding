#include <bits/stdc++.h>
using namespace std;
int main (){
	int a,b,c;
	int n;
	int s1=0,s2=0,s3=0;
	cin>>n;
//	int maxn=a;//,minn=a;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		s1+=a,s2+=b,s3+=c;
	}
	cout<<s1<<" "<<s2<<" "<<s3<<" "<<s1+s2+s3;
	return 0;
}
