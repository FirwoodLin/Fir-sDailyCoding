#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int arr[]={0,10,2,4,56,32,54,324};

void debug(int R[],int n){
	for(int i=1;i<=n;i++)
		printf("%d ",R[i]);
	printf("\n");
}

void SelectSort(int R[],int n){//sort from 1 to n
	for(int i=1;i<=n-1;i++){//n-1 rounds
		int k=i;
		for(int j=i+1;j<=n;j++)
			if(R[j]<R[k]) k=j;
		if(k!=i)
			swap(R[i],R[k]);
		
		for(int i=1;i<=n;i++)
			printf("%d ",R[i]);
		printf("\n");
	}
}

int main(){
	SelectSort(arr,7);
	return 0;
}
