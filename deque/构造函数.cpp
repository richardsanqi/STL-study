/*
deque与vector区别：
    vector对于头部的插入删除效率低，数据量越大，效率越低
    deque相对而言，而头部的插入删除速度会比vector快
    vector访问元素时的速度会比deque快。这和两者内部实现有关
*/


/*
deque构造函数：
    deque<T> deqT;      //默认构造函数
    deque(beg,end);     //构造函数将[beg,end)区间中的元素拷贝给本身
    deque(n,elem);      //构造函数将n个elem拷贝给本身
    deque(const deque &deq);    //拷贝构造函数
*/


#include <deque>
#include <iostream>
using namespace std;


void printDeque(const deque<int> &d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();++it)
    {
        cout<<*it<<" ";
    }
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
    deque<int> d2(d1.begin(),d1.end());
    printDeque(d2);
    deque<int> d3(5,99);
    printDeque(d3);
    deque<int> d4(d3);
    printDeque(d4);
    return 0;
}