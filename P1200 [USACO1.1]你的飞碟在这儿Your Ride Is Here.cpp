#include <bits/stdc++.h>
using namespace std;
char a[10],b[10];
int main(){
	scanf("%s%s",a,b);
	int n=1,m=1;
	for(int i=0;a[i];i++){
		n*=(a[i]-'A'+1);
	}
	for(int i=0;b[i];i++){
		m*=(b[i]-'A'+1);
	}
	if(m%47==n%47) printf("GO");
	else printf("STAY");
	return 0;
}
