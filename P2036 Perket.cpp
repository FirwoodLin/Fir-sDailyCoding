#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int minn=21e8;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        if(abs(x-y)<minn) minn=abs(x-y);
    }
    cout<<minn;
}