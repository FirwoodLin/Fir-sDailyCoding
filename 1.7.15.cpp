#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
const int maxlen=21;
char txt[105][maxlen];
int main ()
{
	int n;
	cin>>n;
	for(int	i=0;i<n;i++)
	{
	cin.getline(txt[i],maxlen+1);
	}
	for(int i=0;i<n;i++)
	{
		int len=strlen(txt[i]);
		if(txt[i][1]>='A'&&txt[i][1]<='Z')
		cout<<txt[i][1]+32;
		else 
		cout<<txt[i][1];
		strlwr(txt);
		for(int j=2;j<=len;j++)
		{
			cout<<txt[i][j];	
		}
		cout<<endl;
	} 
	return 0;
}
