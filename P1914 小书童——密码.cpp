#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char chart[]="abcdefghijklmnopqrstuvwxyz";
char ori[55];
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",ori);
	for(int i=0;ori[i];i++){
		printf("%c",chart[(ori[i]-'a'+n)%26]);
	}
	return 0;
}
