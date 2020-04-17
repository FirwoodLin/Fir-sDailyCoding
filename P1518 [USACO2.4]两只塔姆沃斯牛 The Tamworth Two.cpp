#include <iostream>
#include <cstdio>
#include <cstring>

struct Point{
    int x,y;
    int dirct;
}john,cow;

const Point move

bool s[15][15];//1-10

int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            char c=getchar();
            if(c=='*') s[i][j]=1;
            if(c=='F') john.x=i , john.y=j;
            if(c=='C') cow.x=i , cow.y=j;
        }
        getchar();
    }
    int t=0;
    while(john.x!=cow.x || john.y!=cow.y){
        t++;

    }

}