#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    int ans=2*p;
    for(int i=p+1;i<=n;i++)
        ans+=i;
    printf("%d",ans);
    return 0;
}