//deque数据存取

/*
函数原型：
    at(int idx);        //返回索引idx所指的数据
    operator[];         //返回索引idx所指的数据
    front();            //返回容器中第一个数据元素
    back();             //返回容器中最后一个数据元素
*/

#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;


void MyFunc(int val)
{
    cout<<val<<" ";
}

void printDeque(deque<int> &d)
{
    for_each(d.begin(),d.end(),MyFunc);
    cout<<endl;
}

int main()
{
    deque<int> d1;
    for(int i=0;i<5;++i)
    {
        d1.push_front(i);
    }
    printDeque(d1);
    cout<<d1.at(1)<<endl;
    cout<<d1[1]<<endl;
    cout<<d1.front()<<endl;
    cout<<d1.back()<<endl;
    return 0;
}