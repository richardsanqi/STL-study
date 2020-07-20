//vector插入和删除

/*
push_back()     尾插
pop_back()      尾删
insert(位置迭代器，n，elem)     //在该迭代器位置插入n个elem
erase(位置迭代器)       //删除该位置的元素
clear()         //清空
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
    cout<<endl;
}


int main()
{
    vector<int> v1;
    for(int i=0;i<5;++i)
    {
        v1.push_back(i);
    }
    printVector(v1);
    v1.pop_back();
    printVector(v1);
    v1.insert(v1.begin(),100);
    printVector(v1);
    v1.erase(v1.begin());
    printVector(v1);
    v1.insert(v1.begin(),2,1000);
    printVector(v1);
    return 0;
}