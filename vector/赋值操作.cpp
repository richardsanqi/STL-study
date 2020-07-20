//给vector容器进行赋值

/*
函数原型：
vector& operator=(const vector &vec);   //重载等号运算符
assign(beg,end);    //
assign(n,elem);     //
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
    vector<int> v2=v1;
    printVector(v2);
    vector<int> v3;
    v3.assign(v1.begin(),v1.end());
    printVector(v3);
    vector<int> v4;
    v4.assign(5,1);
    printVector(v4);
    return 0;
}