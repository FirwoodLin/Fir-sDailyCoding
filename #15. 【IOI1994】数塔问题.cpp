#include <iostream>
using namespace std;

int n,a[1000+10][1000+10],ans=-1;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>a[i][j];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            // cout<<i<<" "<<j<<" change from "<<a[i][j];
            a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
            // cout<<" to "<<a[i][j]<<endl;
        }
    }
    for(int i=1;i<=n;i++){
        ans=max(ans,a[n][i]);
    }
    cout<<ans<<endl;
    return 0;
}
