//list构造函数

/*
创建list容器

函数原型：  
    list<T> l;      //list采用模板类实现对象的默认构造形式;
    list(beg,end);      //构造函数将[beg,end)区间中的元素拷贝给本身
    list(n,elem);       //构造函数将n个elem拷贝给本身
    list(const list &l);    //拷贝构造函数
*/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;


void printList(const list<int> &l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> l1;
    for(int i=0;i<5;++i)
    {
        l1.push_back(i);
    }
    printList(l1);
    list<int> l2(l1.begin(),l1.end());
    printList(l2);
    list<int> l3(10,1000);
    printList(l3);
    list<int> l4(l3);
    printList(l4);
    return 0;
}