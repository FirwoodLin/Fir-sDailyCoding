#include <cstring>
#include <string>
#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int cnt[30];

int main(){
	int maxn=-1;
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c<='Z' && c>='A')
			cnt[c-'A']++, maxn= maxn>cnt[c-'A'] ? maxn : cnt[c-'A'];
	}
	for(int i=maxn;i>=1;i--){
		for(int j=0;j<26;j++){
			if(cnt[j]>=i) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	for(int i='A';i<='Z';i++){
		printf("%c ",i);
	}
	return 0;
}
