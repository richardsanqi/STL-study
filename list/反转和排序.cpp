//将容器中的元素反转，以及将容器中的数据进行排序

/*
函数原型：
    reverse();  //反转链表
    sort();     //链表排序
*/

#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

void printList(const list<int> &l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();++it)
    {
        cout<<*it<< " ";
    }
    cout<<endl;
}

//仿函数 此处不是很理解 得后面看到仿函数。
bool MyCompare(int num1,int num2)
{
    return num1>num2;
}

void fanzhuan()
{
    list<int> l1;
    for(int i=10;i<15;++i)
    {
        l1.push_back(i);
    }
    printList(l1);
    l1.reverse();
    printList(l1);
}

void sort()
{
    list<int> l1;
    for(int i=10;i<15;++i)
    {
        l1.push_back(i);
    }
    l1.push_back(1);
    l1.push_back(100);
    printList(l1);
    //不支持随机迭代器不能使这样使用sort方法，stl在类内部实现了sort方法（默认升序）
    //sort(l1.begin(),l1.end());
    l1.sort(MyCompare);
    printList(l1);
}

int main()
{
    //fanzhuan();
    sort();
    return 0;
}