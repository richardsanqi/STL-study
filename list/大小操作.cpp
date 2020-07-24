//对list容器的大小进行操作

/*
判断是否为空        //empty
返回元素个数        //size
重新指定个数        //resize
*/

#include <list>
#include <iostream>
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
    if(l1.empty())
    {
        cout<<"容器为空 "<<endl; 
    }
    else
    {
        cout<<"容器不为空 "<<endl;
        cout<<"容器的大小为 "<<l1.size();
    }
    l1.resize(10,1000);
    printList(l1);
    l1.resize(2);
    printList(l1);
    return 0;
}