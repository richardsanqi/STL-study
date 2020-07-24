//map容器默认排序规则为 按照key值从小到大排序

/*
利用仿函数改变排序规则
*/

#include <map>
#include <iostream>
using namespace std;

//仿函数自定义规则

class MyCompare
{
    public:
        bool operator()(int v1,int v2)
        {
            return v1>v2;
        }
};

void test02()
{
    map<int,int,MyCompare> m1;
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(1,10));
    for(map<int,int,MyCompare>::iterator it=m1.begin();it!=m1.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
}

//默认规则
void test01()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(1,10));
    for(map<int,int>::iterator it=m1.begin();it!=m1.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
}

int main()
{
    test01(); 
    test02(); 
    return 0;
}