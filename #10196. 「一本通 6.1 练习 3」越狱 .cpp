#include <iostream>

using namespace std;
typedef long long ll;
ll mo=100003;

ll qp(ll d,ll z){
	if(z==0) return 1ll;
	if(z==1) return d;
	if(z%2==0) return qp(d*d%mo , z/2);
	else return qp(d*d%mo , z/2) * d %mo;
}
int main(){
	ll m,n;
	cin>>m>>n;
	m%=mo;n%=mo;
	cout <<(qp(m,n) - m * qp(m-1,n-1)%mo +mo) % mo;
	return 0;
}
