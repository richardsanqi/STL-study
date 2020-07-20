//vector数据存取
/*
函数原型
at(int idx);    //返回索引idx所指的数据
operator[];     //返回索引idx所指的数据
front();        //返回容器中第一个数据元素
back();         //返回容器中最后一个数据元素
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void MyFunc(int val)
{
    cout<<val<<" ";
}


void printVector(vector<int> &v)
{
    for_each(v.begin(),v.end(),MyFunc);
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
    for(int i=0;i<v1.size();++i)
    {
        cout<<"v1 is "<<v1[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<v1.size();++i)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<"\n";
    cout<<"第一个元素是 "<<v1.front()<<"\n";
    cout<<"最后一个元素是 "<<v1.back()<<endl;
    return 0;
}