#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int N=1000 + 5;
int row[N];//ins row & row+1
int col[N];//ins col & col+1
int sortrow[N],sortcol[N];

int main(){
	int m,n,k,l,d;
	scanf("%d%d%d%d%d",&m,&n,&k,&l,&d);
	for(int i=0;i<d;i++){
		int xpos1,ypos1,xpos2,ypos2;
		scanf("%d%d%d%d",&xpos1,&ypos1,&xpos2,&ypos2);
		//in same col ? row 2 ins ++ : col 2 ins ++
		if(xpos1==xpos2) row[min(xpos1,xpos2)]++;
		else col[min(ypos1,ypos2)]++;
	}	
	//==========
	
}
