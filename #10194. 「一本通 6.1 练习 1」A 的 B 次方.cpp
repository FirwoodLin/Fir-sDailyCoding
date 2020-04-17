#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

typedef long long ll;
ll qp(ll a, ll b, ll m) {
    if (b == 1)
        return a;
    if (not(b & 1)) {  //Å¼Êý
        ll t = qp(a, b >> 1, m);
        return (t % m) * (t % m) % m;
    } else {  //ÆæÊý
        ll t = qp(a, b >> 1, m);
        t = t * t % m;
        t = t * a % m;
        return t;
    }
}

int main() {
    ll a, b, m;
    cin >> a >> b >> m;
    cout << qp(a, b, m);
    return 0;
}

