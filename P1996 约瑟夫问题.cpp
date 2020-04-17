#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;
struct l_node
{
    int data;
    l_node *pre;
    l_node *nxt;
    l_node(int s = 0)
    {
        pre = nxt = NULL;
        data = s;
    }
} * head, *t1, *t2;

int main()
{
    ;
    int n, m;
    cin >> n >> m;
    //开始构建循环链表
    head = new l_node(1);
    t1 = head;
    for (int i = 2; i <= n; i++)
    {
        t2 = new l_node(i);
        t1->nxt = t2;
        t2->pre = t1;
        t1 = t2;
    }
    t1->nxt = head;
    head->pre = t1;
    //1-n的双链构建完毕
    //开始 k 人
    t2 = head;           //很废柴 其实不必要 但是不想改
    int kick = 0, i = 1; //已经踢出的人数；1~m循环的计数器
    while (kick < n)
    {
        if (i == m)
        {
            kick++;
            t2->pre->nxt = t2->nxt;
            t2->nxt->pre = t2->pre;
            cout << t2->data << " ";
            delete t2;
            t2 = t2->nxt;
            i = 1;
        }
        else
        {
            t2 = t2->nxt;
            i++;
        }
    }
    return 0;
}