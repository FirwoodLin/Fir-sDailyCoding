#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

char s[100];
bool is_not(char aa){
	return !(aa<='9' && aa>='0') && !(aa=='.' || aa=='%' || aa=='/');
}
int main() {
	int l=-1,pos=-1;
	char x=0;
	while(scanf("%c",&s[++l])) {
		if(is_not(s[l])) break; 
		if(s[l]<'0' || s[l]>'9') {
			x=s[l];
			pos=l;
		}
	}
	l--;
//	printf("\n%d %c\n",int(x),x);

	if(x==0) {
		bool flag=1,out=0;
		for(int i=l; i>-1; i--) {
			if(flag==1 && s[i]=='0')
				continue;
			else {
				flag=0;
				out=1;
				printf("%c",s[i]);
			}
		}
		if(!out) printf("0");
	}
	if(x=='.') {
		bool flag=1,out=0;
		for(int i=pos-1; i>-1; i--) {
			if(s[i]=='0' && flag)
				continue;
			printf("%c",s[i]);
			flag=0;
			out=1;
		}
		if(!out) printf("0");
		printf(".");
		int end=pos+1;
		out=0;
		for(int i=pos+1; i<l; i++) {
			if(s[i]=='0' && s[i+1]!='0') {
				end=i+1;
				break;
			}
		}
//		printf("\nend=%d\n",end);
		for(int i=l; i>=end; i--) {
			printf("%c",s[i]);
			out=1;
		}
		if(!out) printf("0");
//		for(int i=0;i<=l;i++){
//			if(s[i]=='\n') printf("%%%%%%%%%%%%%%%,%d\n",i);
//		}
	}
	if(x=='%') {
		bool flag=1,out=0;
		for(int i=l-1; i>-1; i--) {
			if(flag && s[i]=='0')
				continue;
			printf("%c",s[i]);
			flag=0;
			out=1;
		}
		if(out==0) printf("0");
		printf("%%");
	}
	if(x=='/') {
		bool flag=1,out=0;
		for(int i=pos-1; i>-1; i--) {
			if(s[i]=='0' && flag)
				continue;
			printf("%c",s[i]);
			flag=0;
			out=1;
		}
		if(!out) printf("0");
		printf("/");
		flag=1,out=0;
		for(int i=l; i>=pos+1; i--) {
			if(s[i]=='0' && flag)
				continue;
			printf("%c",s[i]);
			flag=0;
			out=1;
		}
		if(out==0) printf("0");
	}
	return 0;
}
