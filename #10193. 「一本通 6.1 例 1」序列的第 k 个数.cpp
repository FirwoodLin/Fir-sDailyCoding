#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long ll;
const ll M=200907LL;
ll a,b,c,d,k,res;

ll mp(ll x,ll y){
	ll ret=1LL;
	while(y){
		if(y&1LL) ret=(ret*x)%M;
		y>>=1LL;//equal to y/2
		x=x*x%M;
	}
	return ret;
}

void solve(){
	cin>>a>>b>>c>>k;
	if(c-b==b-a){//µÈ²î 
		d=(b-a)%M;
		res=(a+(k-1)%M*d) % M;
	}
	else{
		d=(b/a)%M;
		res=a%M*mp(d,k-1)%M;
	}
	cout<<res<<endl;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--) solve();
	return 0;
}
