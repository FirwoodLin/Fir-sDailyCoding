#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1,col=n;
	for(;;row++){
		if(col<=row) break;
		col-=row;
	}
	//sanjiaoxing -> sibianxing
	int nx,ny; 
	if(row%2){//jishu ¨J 
		nx=row-col+1;
		ny=col;
	}
	else{//oushu ¨L
		nx=col;
		ny=row-col+1;
	}
	printf("%d/%d",nx,ny);
	return 0;
	
}
