#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	//��Ŀ���ж��ڴ����������һ�궨��3.5%�� ���궨��4%��
	//СA ��U I M ���ϸ���10000Ԫ��
	//СA����ÿ�δ�һ���ڣ����ں����������ٴ�һ�ֱ꣬������5 �ꡣ
	//UIM ֱ�Ӵ����궨�ڡ�����5������Ƿֱ��ж���Ǯ�� 
	int O=10000;//���� 
	int A;
	int U;
	double iA=3.5/100;
	double iU=4/100;
	A=O*pow(1.035,5);
	U=O*(1+0.04*5);
	cout<<"СA"<<" "<<A<<"Ԫ"<<endl<<"UIM"<<" "<<U<<"Ԫ"<<endl; 
	return 0;
}
