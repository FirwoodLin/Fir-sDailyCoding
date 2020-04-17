#include <iostream>
#include <cstdio>
#include <bitset>
#include <algorithm>
using namespace std;

int n,k,a[25],ans;

bool is_Pr(int n){
    if(n==0 || n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int sol(int left_num,int sum_now,int s,int e){//s:start;e:end
    if(left_num==0) return is_Pr(sum_now);
    int sum=0;
    for(int i=s;i<=e;i++){
        sum+=sol(left_num-1,sum_now+a[i],i+1,e);
    }
    return sum;
}

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n);
    cout<<sol(k,0,1,n);
    return 0;
}