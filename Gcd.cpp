#include <iostream>
using namespace std;
void Gcd(int a[], int b[], int t)
{
    if (Comp(a, b) == 0)
    {
        T = t;
        return;
    }
    if (Comp(a, b) < 0)
    {
        Gcd(b, a, t);
        return;
    }
    int ta, tb;
    if (a[1] % 2 == 0)
    {
        Div(a, 2);
        ta = 1;
    }
    else
        ta = 0;
    if (b[1] % 2 == 0)
    {
        Div(b, 2);
        tb = 1;
    }
    else
        tb = 0;
    if(ta && tb) Gcd(a,b,t+1);
    else 
        if(!ta && !tb){
            Minus(a,b);Gcd(a,b,t);
        }
            else Gcd(a,b,t);

}
int main()
{
}
