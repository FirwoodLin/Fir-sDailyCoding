#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

char a[500+6];

int main(){
    int n;
    scanf("%d",&n);
    scanf("%s",a);
    int len = strlen(a);
    sort(a,a+len);
}