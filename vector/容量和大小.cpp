/*
对vector容器的容量和大小操作

函数原型：
empty();    //判断vector是否为空
size();     //返回元素个数
capacity();     //返回容器容量
resize(n，elem=0);       //重新指定大小,可以指定默认填充的数字（elem默认等于0）
*/

#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}


int main()
{
    vector<int> v1;
    for(int i=0;i<5;++i)
    {
        v1.push_back(i);
    }
    printVector(v1);
    if(v1.empty())
    {
         cout<<"v1容器为空"<<endl;
    }
    else
    {
        cout<<"v1容器不为空"<<endl;
        cout<<"v1容器的容量为 "<<v1.capacity()<<endl;
        cout<<"v1容器的大小为 "<<v1.size()<<endl;
    }
    v1.resize(15,1);
    printVector(v1);
    //若resize的容量小于当前大小，则会删除一部分数据
    v1.resize(7);
    printVector(v1);
    return 0;
}