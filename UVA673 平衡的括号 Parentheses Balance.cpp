#include <cstdio>
#include <stack>
#include <cstring>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

void calc(void){
	string s;
	getline(cin,s);
	int sl=s.size();
	if(sl==0){
		printf("Yes\n");return;}
	stack <char> st;
	for(int i=0;s[i];i++){
		if(s[i]=='[' || s[i] == '(')
			st.push(s[i]);
		else{
			//not couple || no couple
			if(st.empty()){
				printf("No\n");return;}
			if((abs(int(st.top()-s[i])) > 3)){
				printf("No\n");return;}//error
			//coupled
			st.pop();
		}
	}
	if(st.empty())
		printf("Yes\n");
	else
		printf("No\n");
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		calc();
	}
	return 0;
}
