#include <stack>
#include <iostream>
#include <cstdio>
using namespace std;

stack <int> l,r;
int main(){
	char c=0,x,p1=0;
	while(scanf("%c",&x)!=EOF){
		if(x<='9' && x>='0'){
			if(p1) l.push(x-'0');
			else r.push(x-'0');
		}
		else c=x,p1=0;
	}
	
	switch(c){
//normal
		case 0:{
			bool flag=1;
			while(!l.empty()){
				if(flag && !l.top()) 
					;
				else
					printf("%d",l.top());
				l.pop();
			}
			break;
		}
//double
		case '.':{
			bool flag=1;
			while(!l.empty()){
				if(flag && !l.top()) 
					;
				else
					printf("%d",l.top());
				l.pop();
			}
			break;
		}
			
	}
}
