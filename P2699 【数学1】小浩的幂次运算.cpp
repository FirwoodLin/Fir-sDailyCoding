#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(){
    unsigned long long l,r,w,cnt=0,w_new;
    cin>>l>>r>>w;
    w_new=w;
    for(int i=1;;i++){
        if(w<=r && w>=l) cout<<w;;
        if(w>l) break;
        w*=w;
    }
    if(cnt) cout<<cnt;
    else cout<<-1;
    return 0;
}