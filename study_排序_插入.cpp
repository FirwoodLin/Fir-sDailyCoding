#include <iostream>
#include <algorithm>
using namespace std;

const int N=10000+5;
int num[N]={1,2,4,43,5,46,546,3456,3456,345,6,2,123,234,6666,2314};

void InsertSort(int R[],int l,int r){	//����[l,r]
	for(int i=l+1;i<=r;i++){			//l+1 ~ r �������β���
		int x=R[i];						//�ڱ� 
		int j=i-1;
		while(x<R[j]){					//�ҵ��ڱ�����λ�� 
			R[j+1]=R[j];				//������x��Ԫ�غ��� 
			j--;
		}
		R[j+1]=x;						//����x ���������R[i] 
	}
}

int main(){
	InsertSort(num,0,14);
	
	for(int i=0;i<=15;i++)
		printf("%d ",num[i]);
		
	return 0;
}


