//set构造函数和赋值
/*
set基本概念
    ：set/multiset 属于关联式容器，底层是用二叉树的结构实现的
    所有元素都会在插入时自动被排序
set和multiset区别：
        set不允许容器中有重复的元素
        multiset允许容器中有重复的元素
set构造和赋值
*/

#include <iostream>
#include <set>
using namespace std;

void printSet(set<int> &s)
{
    for(set<int>::iterator it=s.begin();it!=s.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s1;
    //no !!!!!!s1.push_back(1);
    for(int i=0;i<5;++i)
    {
        s1.insert(i);
    }
    printSet(s1);
    set<int> s2(s1);
    printSet(s2);
    set<int> s3;
    s3=s2;
    printSet(s3);
    return 0;
}


