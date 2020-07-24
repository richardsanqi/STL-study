/*
功能描述：
    对map容器进行查找数据以及统计数据
函数原型：
    find(key);      //查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，返回map.end()
    count(key);     //统计key的元素个数 在map中只可能是0或1,multimap就可以多个了（map不允许重复key）
*/

#include <map>
#include <iostream>
using namespace std;

void printMap(const map<int,int> &m)
{
    for(map<int,int>::const_iterator it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
}

int main()
{
    map<int,int> m1;
    m1.insert(make_pair(1,10));
    m1.insert(make_pair(2,20));
    m1.insert(make_pair(3,30));
    m1.insert(make_pair(4,40));
    map<int,int> ::iterator it=m1.find(1);
    cout<<it->second<<endl;
    int num=m1.count(1);
    cout<<num<<endl;
    return 0;
}
