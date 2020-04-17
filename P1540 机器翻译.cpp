#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

bool inq[1000+5];

int main(){
	int m,n,x,ans=0;
	scanf("%d%d",&m,&n);
	queue<int> mem;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(inq[x]==false){//not in mem
			ans++;
			inq[x]=true;//in mem
			mem.push(x);
			
			if(mem.size()>m){//queue full
				inq[mem.front()]=false;//delete furthest
				mem.pop();
			}
		}
	}
	printf("%d",ans);
	return 0;
}
