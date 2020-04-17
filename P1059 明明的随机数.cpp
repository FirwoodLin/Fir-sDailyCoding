#include <cstdio>
#include <algorithm>

using namespace std;

bool a[1000+5];

int main(){
	int t,n,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(a[t]) continue;
		cnt++;
		a[t]=1;
	}
	printf("%d\n",cnt);
	for(int i=1;i<=1000;i++){
		if(a[i]) printf("%d ",i);
	}
	return 0;
}
