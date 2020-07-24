/*
区别：  
    set不可以插入重复数据，而multiset可以
    set插入数据的同时会返回插入结果，表示插入是否成功
    multiset不会检测数据，因此可以插入重复数据
*/

#include <set>
#include <iostream>
using namespace std;

void test(pair<set<int>::iterator,bool> &ins)
{
    if(ins.second)
    {
        cout<<"插入成功 "<<endl;
    }
    else
    {
        cout<<"插入失败 "<<endl;
    }
    
}

void printMutiset(const multiset<int> &m)
{
    for(multiset<int>::const_iterator it=m.begin();it!=m.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s1;
    pair<set<int>::iterator, bool> insert=s1.insert(10);
    test(insert);
    insert=s1.insert(10);
    test(insert);
    multiset<int> m_s2;
    m_s2.insert(10);
    m_s2.insert(10);
    printMutiset(m_s2);
    return 0;
}