#include <bits/stdc++.h>
using namespace std;
bool is_zm(char x){
	return (x<='z'&&x>='a')||(x>='A'&&x<='Z');
}
int main(){
	freopen("1.txt","r",stdin);
	freopen("1out.txt","w",stdout);
	char c;
	while(scanf("%c",&c)){
		if(is_zm(c)) printf("__");
		else printf("%c",c);
	}
	return 0;
}
