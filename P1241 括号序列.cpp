#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

bool couple[100+6];

int main(){
    string str;
    cin>>str;
    int l=str.size()-1;
    // for(int i=0;i<=l;i++){
    //     cout<<i<<"="<<str[i]<<endl;
    // }
    // cout<<endl;
    for(int i=l;i>=0;i--){
        if(str[i]==']'){
            for(int j=i;j>=0;j--){
                if(str[j]=='[' && couple[j]==0){
                    // cout<<i<<" "<<j<<" turned into 1 for ]"<<endl;
                    couple[i] = couple[j] = 1;
                    break;
                }
            }
        }
        if(str[i]==')'){
            for(int j=i;j>=0;j--){
                if(str[j]=='(' && couple[j]==0){
                    // cout<<i<<" "<<j<<" turned into 1 for )"<<endl;
                    couple[i] = couple[j] = 1;
                    break;
                }
            }
        }
    }
    // for(int i=0;i<=l;i++) cout<<couple[i];
    for(int i=0;i<=l;i++){
        if(couple[i]==1) cout<<str[i];
        if(couple[i]==0){
            cout<<str[i];
            // cout<<"left without right :"<<str[i]<<" "<<int(str[i]) ;
            if(str[i]=='[') cout<<"]";
            if(str[i]=='(') cout<<")";
        }
        if(couple[i+1]==0 && i+1<=l){
            if(str[i+1]==']') cout<<"[",couple[i+1]=1;
            if(str[i+1]==')') cout<<"(",couple[i+1]=1;
        }
    }
    return 0;
}