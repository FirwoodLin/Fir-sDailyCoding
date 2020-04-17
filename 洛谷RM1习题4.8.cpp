#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	//题目银行定期存款年利率是一年定存3.5%， 五年定存4%。
	//小A 和U I M 手上各有10000元。
	//小A决定每次存一年期，到期后将连本带利再存一年，直到存满5 年。
	//UIM 直接存五年定期。请问5年后他们分别有多少钱？ 
	int O=10000;//本金 
	int A;
	int U;
	double iA=3.5/100;
	double iU=4/100;
	A=O*pow(1.035,5);
	U=O*(1+0.04*5);
	cout<<"小A"<<" "<<A<<"元"<<endl<<"UIM"<<" "<<U<<"元"<<endl; 
	return 0;
}
