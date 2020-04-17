#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
ll n,m,k,x;

ll ksm(ll d, ll z){
	if(z==1) return d;
	if(z%2==0){
		ll t=ksm(d,z/2);
		return (t%n) * (t%n) % n;
	}
	else{
		ll t=ksm(d,z/2);
		t=t%n * (t%n) % n;
		t=t*d %n;
		return t;
	}
}

int main(){
	cin>>n>>m>>k>>x;
	cout<<(x + m * ksm(10,k) % n) % n;
	return 0;
}
