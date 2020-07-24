//给list容器进行赋值，以及交换list容器
/*
函数原型：
    assign(beg,end);    //将[beg,end)区间中的数据拷贝赋值给本身
    assign(n,elem);     //将n个elem拷贝值赋值给本身
    list & operator=(const list &lst);      //重载等号操作符
    swap(lst);          //将lst与本身的元素互换
*/

#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

void MyFunc(int val)
{
    cout<<val<<" ";
}

void printList(const list<int> &l)
{
    for_each(l.begin(),l.end(),MyFunc);
    cout<<"\n";
}

int main()
{   
    list<int> l1;
    for(int i=0;i<5;++i)
    {
        l1.push_back(i);
    }
    printList(l1);
    list<int> l2;
    l2=l1;
    printList(l2);
    list<int> l3;
    l3.assign(l2.begin(),l2.end());
    printList(l3);
    list<int> l4;
    l4.assign(5,666);
    printList(l4);
    l4.swap(l3);
    printList(l3);
    printList(l4);
    return 0;
}