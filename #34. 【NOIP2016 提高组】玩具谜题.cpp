#include <bits/stdc++.h>
using namespace std;
const int len = 100000 + 5;
struct human{
	int cx;string job;
}hm[len];
int main (){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",hm[i].cx);
		cin>>hm[i].job;
	}
	//0 out; 1 in
	//0 left; 1 right
	//0-0 1-1 nishizhen
	//0-1 1-0 shunshizhen
	int pos=0;//now
	for(int i=1;i<=m;i++){
		int a,s;
		scanf("%d%d",&a,&s);
		//shun
		if(a==hm[pos].cx){
//			cout<<"nowpos: "<<pos<<" nowjob:"<<hm[pos].job<<" ni "<<s<<endl;
			s%=n;
			pos=n-s+pos;
			pos%=n;
//			cout<<"1pos: "<<pos<<" nowjob:"<<hm[pos].job<<endl<<endl;
		}
		//ni
		else {
//			cout<<"nowpos: "<<pos<<" nowjob:"<<hm[pos].job<<" shun "<<s<<endl;
			s%=n;
			pos+=s;
			pos%=n;
//			cout<<"1pos: "<<pos<<" nowjob:"<<hm[pos].job<<endl<<endl;
		}
	}
	cout<<hm[pos].job<<endl;
	return 0;
}
