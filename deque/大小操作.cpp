//对deque容器的大小进行操作


/*
deque.empty();      //判断容器是否为空
deque.size();       //返回容器中元素的个数
deque.resize(num);      //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                        //如果容器便端，则末尾超出容器长度的元素被删除
deque.resize(num,elem);     //重新指定容器的长度为num，以elem值填充新位置。
*/

#include <iostream>
#include <deque>
using namespace std;


void printDeque(deque<int> &d)
{
    for(deque<int>::iterator it=d.begin();it!=d.end();++it)
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
    if(d1.empty())
    {
        cout<<"容器为空"<<endl;
    }
    else
    {
        cout<<"容器不为空"<<endl;
        cout<<"容器中的元素个数为 "<<d1.size()<<"\n";
    }
    d1.resize(20,1);
    printDeque(d1);
    d1.resize(5);
    printDeque(d1);
    return 0;
}