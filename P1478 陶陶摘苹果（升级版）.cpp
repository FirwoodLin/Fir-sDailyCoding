#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int s[5000+5],ans,able,mp;

void readin(void){
	int n;
	scanf("%d%d",&n,&mp);
	int a,b;
	scanf("%d%d",&a,&b);
	int maxh=a+b;
	for(int i=1;i<=n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		if(x<=maxh) s[able++]=y;
	}
}

void work(void){
	sort(s , s+able);
	for(int i=0;i<=able && able!=0;i++){
		if(mp>=s[i]){
			mp-=s[i];
			ans++;
		}
		else break;
	}
	printf("%d",ans);
}

int main(){
	readin();
	work();
	return 0;
}
