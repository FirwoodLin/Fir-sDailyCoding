#include <bits/stdc++.h>
using namespace std;
const double k=0.98;

int main(){
	double s,x;
	scanf("%lf%lf",&s,&x);

	double sum=0;
	double step=7;
	double ld=s-x;//dist to left
	double rd=s+x;//dist to right
//	cout<<ld<<" "<<rd<<endl;
	while(1){
		if(sum>=ld && sum+step<=rd){
			cout<<"y";
			return 0;	
		}
		sum+=step;//+1e-6;
		step*=k;
//		cout<<sum<<" "<<endl;
		if(sum>rd){
			cout<<"n";
			return 0;	
		}
	}//++ until in range
	return 0;
}
