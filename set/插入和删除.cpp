/*
set容器的插入和删除

函数原型：
    insert(elem);       //在容器中插入元素
    clear();            //清除所有元素
    erase(pos);         //删除pos迭代器所指的元素，返回下一个元素的迭代器
    erase(beg,end);     //删除区间[beg,end)的所有元素，返回下一个元素的迭代器
    erase(elem);        //删除容器中值为elem的元素
*/

#include <set>
#include <iostream>
using namespace std;

void printSet(const set<int> &s)
{
    for(set<int>::const_iterator it=s.begin();it!=s.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(23123);
    s1.insert(2131412412);
    s1.insert(421412);
    s1.insert(512541);
    printSet(s1);
    s1.erase(s1.begin());
    printSet(s1);
    set<int> s2;
    s2=s1;
    printSet(s2);
    s2.erase(s2.begin(),s2.begin());
    printSet(s2);
    s1.clear();
    printSet(s1);
    return 0;
}