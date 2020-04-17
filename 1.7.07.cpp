#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
const int maxn=255+5;
char txt[maxn];
char peidui[260];
int main ()
{
	cin.getline(txt,maxn+1);
	peidui['A']='T';peidui['C']='G';
	peidui['T']='A';peidui['G']='C';
	int len=strlen(txt);
	for(int i=0;i<len;i++)
		printf("%c",peidui[txt[i]]);
	return 0;
}
