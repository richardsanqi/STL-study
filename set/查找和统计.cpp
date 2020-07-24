//对set容器进行查找数据以及统计数据

/*
函数原型：
    find(key);      //查找key是否存在，若存在，返回该键的元素的迭代器;若不存在，返回set.end();
    cout(key);      //统计key的元素个数
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);
    set<int>::iterator it=s1.find(30);
    if(it!=s1.end())
    {
        cout<<"找到元素 "<<*it<<endl;
    }
    else
    {
        cout<<"不存在该元素"<<endl;
    }
    //因为set不允许有重复元素，所以次数只能为0或者1
    multiset<int> m;
    cout<<"30出现的次数为 "<<s1.count(30)<<"\n";
    return 0;
}