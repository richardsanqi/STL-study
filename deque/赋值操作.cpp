/*
函数原型：
    deque& operator=(cinst deque &deq);     //重载等号运算符
    assign(beg,end);        //将[beg,end)区间中的数据拷贝赋值给本身
    assign(n,elem);         //将n个elem拷贝赋值给本身
*/


#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;


void MyFunc(int val)
{
    cout<<val<<" ";
}


void printDeque(const deque<int> d)
{
    for_each(d.begin(),d.end(),MyFunc);
    cout<<endl;
}


int main()
{
    deque<int> d1;
    for(int i=0;i<5;++i)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    deque<int> d2=d1;
    printDeque(d2);
    deque<int> d3;
    d3.assign(d1.begin(),d1.end());
    deque<int> d4(10,100);
    printDeque(d4);
    return 0;
}