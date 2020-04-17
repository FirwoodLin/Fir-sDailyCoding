#include <cstdio>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
//
//const int MAXN=1000 + 10;
//int n,target[MAXN];

int main(){
//	freopen("rails.txt","w",stdout);
	int n;
	while(scanf("%d",&n),n!=0){
		while(true){
			int target;
			stack <int> c;
			int tot=0;//last push to c
			int err=0;//0==no err;1==err;2==end
			for(int i=1;i<=n;i++){
				scanf("%d",&target);
				if(target==0) {err=2;break;}//group end
				
				if(target>=tot){
					for(int j=tot+1;j<=target;j++)
						c.push(j);
					c.pop();
					tot=target;
				}
				else{
					if(c.top()==target)
						c.pop();
					else{
						err=1;break;}
				}
			}
			if(err==0) printf("Yes\n");
			if(err==1) printf("No\n");
			if(err==2) break;
		} 
		printf("\n");
	}
	return 0;
}
