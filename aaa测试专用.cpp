#include<iostream>
#include<cstdio>
#define llt long long int
using namespace std;
int main()
{
    llt n,num[20],ans,test=1;
    while(scanf("%lld",&n)!=-1)
    {
        ans=0;
        for(llt i=0;i<n;i++)
            scanf("%lld",&num[i]);
        for(llt i=0;i<n;i++)
            for(llt s=1,j=i;j<n;j++)
            {
                s*=num[j];
                ans=max(s,ans);
            }
        printf("Case #%lld: The maximum product is %lld.\n\n",test,ans);
        test++;
    }
    return 0;
}