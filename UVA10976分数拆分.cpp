#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    long long k;
    while(scanf("%lld",&k)!=-1){
        long long k2=k*k;
        vector <long long> ans;
        for(long long i=1;i<=k;i++){
            if(k2%i==0){
                ans.push_back(i);
            }
        }
        long long num=ans.size();
        printf("%lld\n",num);
        for(long long i=0;i<num;i++){
            printf("1/%lld = 1/%lld + 1/%lld\n",k,k2/ans[i]+k,ans[i]+k);
        }
    }
    return 0;
}
