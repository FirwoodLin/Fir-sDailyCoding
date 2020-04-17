#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char a;
    int ans=0;
    for(int i=1;i<=8;i++){
        a=getchar();
        if(a=='1') ans++;
    }
    cout<<ans;
}