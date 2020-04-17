#include<iostream>
using namespace std;
int main()
{
	int M1,M2,T1,T2,W1,W2,Th1,Th2,F1,F2,S1,S2,Su1,Su2,ans,maxtime;
	cin>>M1>>M2>>T1>>T2>>W1>>W2>>Th1>>Th2>>F1>>F2>>S1>>S2>>Su1>>Su2;
	ans=0,maxtime=8;
	if(M1+M2>maxtime) ans=1;
	else if(T1+T2>maxtime) ans=2;
	else if(W1+W2>maxtime) ans=3;
	else if(Th1+Th2>maxtime) ans=4;
	else if(F1+F2>maxtime) ans=5;
	else if(S1+S2>maxtime) ans=6;
	else if(Su1+Su2>maxtime) ans=7;
	cout<<ans;
	
	return 0;
}
