/*
map/multimap容器
    map中所有元素都是pair
    pair中第一个元素为key（键值），起到索引作用。第二元素为value(实值)
    所有元素都会根据元素的键值自动排序
    本质：
    map/multimap属于关联式容器，底层结构是用二叉树实现

    优点：
        可以根据key值快速找到value值
    map和multimap区别：
        map不允许容器中有重复key值元素
        multimap允许容器中有重复key值元素

    函数原型：
        构造：
            map<T1,T2> mp;      
            map(const map &mp);     //拷贝构造函数
    赋值：
        map& operator=(const map &mp);      
*/

#include <map>
#include <iostream>
using namespace std;

void printMap(const map<int,int> &m)
{
    for(map<int,int>::const_iterator it=m.begin();it!=m.end();++it)
    {
        cout<<"key is "<<it->first<<" "<<"value is "<<it->second<<endl;
    }
    cout<<endl;
}

int main()
{
    map<int,int> t1;
    t1.insert(pair<int,int>(1,20));
    t1.insert(pair<int,int>(2,20));
    t1.insert(pair<int,int>(3,30));
    t1.insert(pair<int,int>(4,10));
    t1.insert(pair<int,int>(5,20));
    printMap(t1);
    //拷贝构造
    map<int,int> t2(t1);
    printMap(t2);
    //重载operator=
    map<int,int> t3;
    t3=t2;
    printMap(t3);
    return 0;
}