#include <stack>
#include <iostream>
#include <cstdio>
using namespace std;
stack <char> s;

int main(){
    char c;
    while((c=getchar()) !='@'){
        if(c=='(') s.push(c);
        if(c==')'){
            if(s.empty() || s.top()!='('){
                cout<<"NO";
                return 0;
            }
            else{
                s.pop();
            }
        }
    }
    if(s.empty()) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}