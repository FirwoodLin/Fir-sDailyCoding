#include <cstdio>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
char needle[10+5],pile[1000000+5];
char sp[]=" ";
char x;

void mytl(char daxie[]){
	int tem=0;
	while(daxie[tem]) daxie[tem]=tolower(daxie[tem]),tem++;
}

int main(){
	//read in
	cin.getline(needle+1,15);
	cin.getline(pile+1,1000000+5);
	//'space' add
	needle[0]=pile[0]=' ';
	strcat(needle,sp);
	strcat(pile,sp);
	int l1=strlen(needle),l2=strlen(pile);
	//lower
//	cout<<endl<<"lowering"<<endl;
	mytl(needle);
	mytl(pile);
	//=====
	int fp=-1,ans=0;
	bool fst=1;
	for(int i=0;i<l2;i++){
		if(needle[0]!=pile[i]) continue;
		int same=0;
		for(int j=0;j<l1;j++){
			if(needle[j]==pile[i+j]) same++;
		}
		if(same==l1){
			ans++;
			if(fst){
				fst=0;
				fp=i;	
			}
		} 
	}
	if(fp==-1)
		printf("-1");
	else 
		printf("%d %d",ans,fp);
	return 0;
}
