#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
struct student{
    int id,chi,tol;
}stu[300+5];

bool cmp(student a,student b){
    return a.tol>b.tol;
    return a.chi>b.chi;
    return a.id>b.id;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int mat,eng;
        cin>>stu[i].chi>>mat>>eng;
        stu[i].tol=stu[i].chi+mat+eng;
        stu[i].id=i+1;
    }
    sort(stu,stu+n,cmp);
    for(int i=0;i<5;i++){
        cout<<stu[i].id<<" "<<stu[i].tol<<endl;
    }
    return 0;
}