/*
链表不支持随机迭代器，所以也不支持at或者[]形式进行数据存取
front();
back();
*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;
    for(int i=0;i<5;++i)
    {
        l1.push_back(i);
    }
    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;
    list<int>::iterator it=l1.begin();
    //it=it+1;!!!!!不支持随机迭代器
    cout<<"first "<<*it<<endl;
    it=++it;
    cout<<"hi "<<*it<<endl;
    return 0;
}