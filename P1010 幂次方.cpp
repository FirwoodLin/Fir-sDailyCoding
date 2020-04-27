#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

void sol(int n){
	for(int i=14;i>=0;i--){
		if(pow(2,i)<=n){
			if(i==1) cout<<"2";
			else if(i==0) cout<<"2(0)";
			else{
				cout<<"2(";
				sol(i);
				cout<<")";
			}
			n-=pow(2,i);
			if(n!=0) cout<<"+";
		}
	}
}
int main(){
    int n;
    cin>>n;
    sol(n);
}