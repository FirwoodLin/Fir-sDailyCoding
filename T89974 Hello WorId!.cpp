#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
char ori[]={"Hello World!"};
char now[40];
int main(){
	gets(now);
	int len=strlen(ori);
	for(int i=0;i<=len;i++){
		if(ori[i]!=now[i]){
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}
