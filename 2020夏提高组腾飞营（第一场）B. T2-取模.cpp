#include <iostream>
#include <cstdio>
#include <algorithm>

int read()        
{        
    int s = 0, f = 1;        
    char ch = getchar();        
    while(!isdigit(ch)) {        
        if(ch == '-') f = -1;        
        ch = getchar();            }        
    while(isdigit(ch)) {        
        s = s * 10 + ch - '0';        
        ch = getchar();            }        
    return s * f;        
}       

int main(){
    // freopen("mod.in","r",stdin);
    // freopen("mod.out","w",stdout);
    int t = read(),n;
    unsigned long long ans = 0;
    for(int i=1;i<=t;i++){
        ans = 0;
        n = read();
        for(int j=1;j<=n;j++){
            ans += n%j;
        }
        printf("%lld\n",ans);
    }
    // fclose(stdout);
    // fclose(stdin);
    return 0;
}