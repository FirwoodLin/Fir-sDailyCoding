#include <iostream>
#include <algorithm>
using namespace std;

const int N=10000+5;
int num[N]={1,2,4,43,5,46,546,3456,3456,345,6,2,123,234,6666,2314};

void InsertSort(int R[],int l,int r){	//排序[l,r]
	for(int i=l+1;i<=r;i++){			//l+1 ~ r 进行依次插入
		int x=R[i];						//哨兵 
		int j=i-1;
		while(x<R[j]){					//找到哨兵插入位置 
			R[j+1]=R[j];				//将大于x的元素后移 
			j--;
		}
		R[j+1]=x;						//插入x ，即最初的R[i] 
	}
}

int main(){
	InsertSort(num,0,14);
	
	for(int i=0;i<=15;i++)
		printf("%d ",num[i]);
		
	return 0;
}


