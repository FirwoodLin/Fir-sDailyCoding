#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

char old_s[500+6],new_s[500+6];
int cnt[300],ans;
int n;
void dfs(int pos){
    if(pos==n+1){
        for(int i=1;i<=n;i++)
            printf("%c",new_s[i]);
        printf("\n");
        ans++;
        return ;
    }

    for(char i=old_s[1];i<=old_s[n];i++){
        if(cnt[i]>0 ){
            new_s[pos]=i;
            cnt[i]--;
            dfs(pos+1);
            cnt[i]++;
        }
    }
}
int main(){
    scanf("%d%c",&n);
    for(int i=1;i<=n;i++){
        scanf("%c",&old_s[i]);
        cnt[old_s[i]]++;
    }
    sort(old_s+1,old_s+n+1);
    dfs(1);
    printf("%d\n",ans);
    return 0;
}