#include <iostream>
#include <vector>
using namespace std;

struct l_node{
    int data;
    struct l_node * next;// 严格写法 struct
    struct l_node * pre;
};

int main(){
    l_node * head = NULL;

    head ->next

    new;
    delete;

    vector<int> a;
    int i;
    a.at(i);//有越界检查
    a[i];//无~
    a.push_back();
    a.pop_back();

    int n;
    a.reserve(n);//预留 n 大小的空间
    
    优点：
    小数据，编程效率高；占用空间较小。
    缺点：
    大数据时，时间复杂度太高。(可以解决)
    原理：
    开小->近满->新开一个倍增空间，迁移原数据，删除原空间；
}