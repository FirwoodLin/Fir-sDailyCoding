#include <bits/stdc++.h>
using namespace std;
char isbn[20];
int main(){
	int sum=0;
	int tx=1;
	for(int i=1;i<=13;i++){
		scanf("%c",&isbn[i]);
		if(i==1 || (i>=3 && i<=5) || (i>=7 && i<=11))
			sum+=(isbn[i]-'0')*tx,tx++;
	}
	char trueend= sum%11==10 ? 'X' : sum%11+'0';
	if(trueend==isbn[13]) printf("Right");
	else {
		isbn[13]=trueend;
		for(int i=1;i<=13;i++)
			printf("%c",isbn[i]);
	}
	
}
