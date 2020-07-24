//set容器默认排序规则为从小到大，掌握如何改变排序规则
/*
主要技术点：
    利用仿函数，可以改变排序规则

    关键原因是：set一旦插入数据就按照默认规则排序好，
    所以需要在插入数之前约定好如何插数。
*/

#include <set>
#include <iostream>
using namespace std;

class MyCompare
{
    public:
        bool operator()(int v1,int v2)
        {
            return v1>v2;
        }
};

void printSet(const set<int,MyCompare> &s)
{
    for(set<int>::const_iterator it=s.begin();it!=s.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int,MyCompare> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(1);
    printSet(s1);
    
    
    return 0;

}