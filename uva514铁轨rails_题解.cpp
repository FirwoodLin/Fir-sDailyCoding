#include<cstdio>
#include <cstring>
#include<stack>  
using namespace std;  
const int MAXN=1010;  
int train[MAXN];  

int main()  
{  
	freopen("railstj.txt","w",stdout);
    int n,A,B,ok;  
    while(scanf("%d",&n),n)  //uva���ÿ�ͷ
    {  
        stack<int> s;  
        while(1){  
        scanf("%d",&train[1]);  
        if(train[1]==0)  break;  
        {  
        for(int i=2;i<=n;i++)  
        {  
             scanf("%d",&train[i]);  
        }  
        A=B=ok=1;   
        while(B<=n)  //���ʻ��B�ĳ���������n����ѭ��������   
        {  
            //���ʻ��C�ĳ�����ʻ��B�ĳ������кţ�ֱ�Ӹý���ʻ��B
            //���Եó����������ʻ��C�ĳ�����ʻ��B�ĳ������кţ�A��һ��ֱ��ʻ��B
            if(A==train[B]) { A++,B++;}   
            //�������ж�ջ����(����C������)���Ƿ����ʻ��B�ĳ�
            //���������򽫳�ʻ��B
            else if(!s.empty()&&s.top()==train[B]) {s.pop(),B++;}  
            //����ʻ��C   
            else if(A<=n) s.push(A++);  
            //�����ȫ����ʻ��C��ѭ����û�н�������ζ��������train˳����ʵ��   
            else  
            {  
                ok=0;  
                break;  
            }  
        }  
        printf("%s\n",ok?"Yes":"No");}}  
        printf("\n");  
    }  
}  
