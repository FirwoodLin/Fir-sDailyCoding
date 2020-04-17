#include <iostream>
#include <cstring>
using namespace std;

// long long ans[1000+5];
// long long sum[1000+5];
// int main(){
// 	int n;
// 	cin>>n;
// 	ans[1]=1;
// 	sum[1]=1;
// 	for(int i=1;i<=n;i++){
// 		sum[i]= sum[i-1] + (ans[i] = sum[i>>1] + 1);
// 	}
// 	cout<<ans[n];
// 	return 0;
// }

long long ans[1000+5];
int n;
int solve(int n){
	if(ans[n]!=-1)
		return ans[n];
	if(n%2==1)
		return solve(n-1);
	int t=1;
	for(int i=1;i<=n/2;i++)
		t+=solve(i);
	return ans[n]=t;
}
int main(){
	memset(ans,-1,sizeof(ans));
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}