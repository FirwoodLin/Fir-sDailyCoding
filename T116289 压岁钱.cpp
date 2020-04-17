#include <bits/stdc++.h>

using namespace std;
int cnt=0,mhand,mfrz;
int ord[1000000 + 1];
//money in hand,money freezen,whichthigwillunfreezen;
void judge(int t,int j){
	int a;scanf("%d",&a);
	switch(t){
		case 1:{
			mhand+=ord[j];
			mhand+=a;
			break;
		}
		case 2:{
			mhand+=ord[j];
			if(mhand<a) cnt++;
			else mhand-=a;
			break;
		}
		case 3:{
			mhand-=a;
			int b;scanf("%d",&b);
			ord[b]+=a;
			break;
		}
	}
}
int main(){
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int t;
		scanf("%d",&t);
		judge(t,i);
	}
	printf("%d",cnt);
	return 0;
}
