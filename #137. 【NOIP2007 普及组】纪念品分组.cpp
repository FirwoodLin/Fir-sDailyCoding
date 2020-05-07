#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int a[30000+100];

int main(){
    string s;
    s.substr();
    int w,n;
    scanf("%d%d",&w,&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int l=0,r=n;
    int cnt=0;
    while(a[l]+[r]>w) cnt++,l+,r--;
}