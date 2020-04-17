#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
const int mod = 10007;
const int MAXN = 1000 + 5;
int c[MAXN][MAXN];
int create_delta(int x, int y)
{
    if(y>x)
        return 0;
    if(x==0 || y==0)
        return 0;
    if (c[x][y]){
        printf("true :c[%d][%d]=%d\n",x,y,c[x][y]);
        return c[x][y];
    }
    if (x == 1 || y == 1 || x == y){
        c[x][y]=1;
        printf("1 :c[%d][%d]=%d\n",x,y,c[x][y]);
        return c[x][y];
    }
    c[x][y] = (create_delta(x-1,y) + create_delta(x-1,y-1)) % mod;
    printf("else :c[%d][%d]=%d\n",x,y,c[x][y]);
    return c[x][y];
}
long long qp(int x, int y, int m)
{
    if (y == 1)
        return x;
    if (y == 0)
        return 1;
    int t = qp(x, y / 2, m) % m;
    if (y % 2 == 1)
        return ((t * t) % m) * x % m;
    else
        return (t * t) % m;
}
#ifdef T
void test(){
    // cout<<"pow(2,5)"<<qp(2,5,mod)<<endl;
    cout<<"del(10,8)"<<create_delta(10,8)<<endl;
}
#endif

int main()
{
    c[1][1]=1;
    #ifdef T
    test();
    #endif
    int a, b, k, n, m;
    cin >> a >> b >> k >> n >> m;
    int num_c = create_delta(n, n - k + 1);
    long long ans=1;
    ans *= num_c % mod;
    ans *= qp(a,k-m,mod)%mod;
    ans *= qp(a,m,mod) %mod;
    cout<<ans%mod;
    return 0;
}