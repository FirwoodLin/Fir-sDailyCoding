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
    while(scanf("%d",&n),n)  //uva常用开头
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
        while(B<=n)  //如果驶向B的车个数等于n，则循环结束。   
        {  
            //如果驶向C的车等于驶向B的车的序列号，直接该将车驶进B
            //可以得出若满足如果驶向C的车等于驶向B的车的序列号，A车一定直接驶入B
            if(A==train[B]) { A++,B++;}   
            //否则，则判断栈顶的(即在C最上面)车是否等于驶向B的车
            //若成立，则将车驶入B
            else if(!s.empty()&&s.top()==train[B]) {s.pop(),B++;}  
            //将车驶进C   
            else if(A<=n) s.push(A++);  
            //如果车全部都驶入C，循环还没有结束，意味着所给的train顺序不能实现   
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
