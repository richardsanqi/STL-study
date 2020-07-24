/*
函数原型：
    empty()
    size()
    swap(st);
*/

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void MyFunc(pair<int,int> val)
{
    cout<<"key is "<<val.first<<" "<<val.second<<endl;
}

void printMap(const map<int,int> &m)
{
    for_each(m.begin(),m.end(),MyFunc);
    cout<<endl;
}

int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(421,30));
    m1.insert(pair<int,int>(12314,40));
    m1.insert(pair<int,int>(123,50));
    if(m1.empty())
    {
        cout<<"map容器为空"<<endl;
    }
    else
    {
        cout<<"map容器不为空"<<endl;
        cout<<"map容器的大小为 "<<m1.size()<<endl;
    }
    map<int,int> m2;
    m2.insert(pair<int,int>(1,10));
    m2.insert(pair<int,int>(2,20));
    m2.insert(pair<int,int>(3,30));
    m2.insert(pair<int,int>(4,40));
    m2.insert(pair<int,int>(5,50));
    cout<<"交换前： "<<endl;
    printMap(m1);
    printMap(m2);
    cout<<"交换后： "<<endl;
    m1.swap(m2);
    printMap(m1);
    printMap(m2);
    return 0;
}