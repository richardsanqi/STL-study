//对list容器进行数据的插入和删除

/*
push_back(elem);
pop_back();
push_front(elem);
pop_front();
insert(pos,elem);
insert(pos,n,elem);
insert(pos,beg,end);
clear();
erase(beg,end);
erase(pos);
remove(elem);   //删除容器中所有与elem值匹配的元素
*/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printList(const list<int> &l)
{
    for(list<int> ::const_iterator it=l.begin();it!=l.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> l1;
    l1.push_back(100);
    l1.push_back(200);
    l1.push_back(300);
    l1.push_back(400);
    l1.push_back(100);
    printList(l1);
    l1.remove(100);
    printList(l1);
    return 0;
}