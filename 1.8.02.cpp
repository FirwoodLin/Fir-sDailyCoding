#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
char txt[100005];
int cnt[300]={0};
int main ()
{
//	cin.getline(txt,100005);
	scanf("%s",txt);
	int num=strlen(txt);
//	cout<<num;
	for(int i=0;i<num;i++)
	{
		cnt[txt[i]]++;
	}
	for(int i=0;i<num;i++)
	{
		if(cnt[(int)txt[i]]==1)
		{	
			cout<<txt[i];
			return 0;
		}
		
	}
	cout<<"no";
	return 0;
}
