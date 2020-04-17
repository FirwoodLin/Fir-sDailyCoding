#include <iostream>
using namespace std;
long long ans[20];

void sol(int n){
    for(int i=2;i<=n;i++){
        for(int j=0; j<i;j++){
            ans[i] += ans[j] * ans[i-j-1];
        }
    }
}
int main(){
    int n;
    cin>>n;
    ans[0]=ans[1]=1;
    sol(n);
    cout<<ans[n];
    return 0;
}