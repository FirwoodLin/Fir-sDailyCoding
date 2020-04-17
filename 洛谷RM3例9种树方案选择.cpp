#include<cstdio>
using namespace std;
int main ()
{
	//学校开发了一片区域准备种果树，依据校友捐款选择树种.
	//如果捐款小于10万，只种梨树，每棵梨树500元；
	//捐款大于等于10万，
	//30%用于种梨树，每棵梨树500元,
	//50%用于种桃树，每棵桃树600元，
	//20%用于种苹果树，每棵苹果树800元。输入捐款，输出各种果树种多少颗。

	int money;
	int n1,n2,n3;//梨，桃，苹 
	scanf("%d",&money);
	if(money>=100000) n1=int(money/10*3/500),n2=int(money/10*5/600),n3=int(money/10*2/800);
	else n1=money/500;
	if(money>=100000) printf("梨树%d棵，桃树%d棵，苹果树%d棵",n1,n2,n3);
	else printf ("梨树%d棵",n1);
	return 0;
	 
}
