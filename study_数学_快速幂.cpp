#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

typedef long long ll;

ll quickpow(ll a,ll b,ll n){
	if(b==1) return a;
	if(b%2==0){
		ll t=quickpow(a,b/2,n);
		return t*t%n; 
	}
	else{
		
		ll t=quickpow(a,b/2,n);
		t=t*t%n;
		t=t*a%n;
		return t;
	}
}

int main(){
	ll a,b,n;
	cin>>a>>b>>n;
	ll tem=quickpow(a,b,n);
	cout<<tem;
	return 0;
}
