#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;
string sol(){
    string ans,ans_now;
    int n;
    char c;
    while(cin>>c){
        switch(c){
            case '[':{
                cin>>n;
                ans_now=sol();
                while(n--)
                    ans+=ans_now;
                break;
            }
            case ']':{
                return ans;
                break;
            }
            default:{
                ans+=c;
                break;
            }
        }
    }
}

int main(){
    cout<<sol();
    return 0;
}