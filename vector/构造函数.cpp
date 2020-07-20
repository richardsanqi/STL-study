/*
vector 构造函数
vector<T> v;    //采用模板实现类实现，默认构造函数
vector(v.begin(),v.end())   //将v[begin(),end()]区间中的元素拷贝给本身
vector(n,elem);     //构造函数将n个elem拷贝给本身
vector(const vector &vec);      //拷贝构造函数
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
}


void test()
{
    //默认构造
    vector<int> v1;
    for(int i=0;i<5;++i)
    {
        v1.push_back(i);
    }
    printVector(v1);
    cout<<endl;
    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);
    cout<<endl;
    vector<int> v3(5,6);
    printVector(v3);
    cout<<endl;
    vector<int> v4(v3);
    printVector(v4);
}


int main()
{
    test();
    return 0;
}