#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
const int MAXN=100000+5;
struct desk{
    vector<int> pos,data;
    int s;
}dsk[MAXN];

int main(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=q;i++){
        int type;
        cin>>type;
        int x,y,z;
        if(type==1){
            cin>>x>>y>>z;
            dsk[x].pos.push_back(y);
            dsk[x].data.push_back(z);
            dsk[x].s++;
        }
        else{
            cin>>x>>y;
            for(int ii=dsk[x].s-1;ii>=0;ii--){
                // cout<<"now,ii= "<<ii<<" dsk.pos= "<<dsk[x].pos[ii]<<endl;
                if(dsk[x].pos[ii]==y){
                    cout<<dsk[x].data[ii]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}