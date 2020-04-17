#include <iostream>
#include <algorithm>
using namespace std;

const int N=10000+5;
int num[N]={1,2,4,43,5,46,546,3456,3456,345,6,2,123,234,2314};

void BubbleSort(int n[],int l,int r){
	for(int i=l;i<r;i++){
		bool flag=1;//
		for(int j=l;j<=r-i;j++)
			if(num[j] > num[j+1]) swap(num[j+1],num[j]);
		if(flag) return ;//
	}
}

int main(){
	BubbleSort(num,0,15);
	
	for(int i=0;i<=15;i++)
		printf("%d ",num[i]);
		
	return 0;
}


