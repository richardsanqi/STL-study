/*
自定义数据排序
*/

#include <map>
#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person(int num,string name)
        {
            this->m_name=name;
            this->m_number=num;
        }
        string m_name;
        int m_number;
};

class MyCompare
{
    public:
        bool operator()(const Person &p1,const Person &p2)
        {
            return p1.m_number>p2.m_number;
        }
};

void printMap(const map<Person,int,MyCompare> &m)
{
    for(map<Person,int,MyCompare>::const_iterator it=m.begin();it!=m.end();++it)
    {
        cout<<"name is "<<it->first.m_name<<"num is "<<it->first.m_number<<"second "<<it->second<<endl;
    }
    cout<<endl;
}



int main()
{
    map<Person,int,MyCompare> m1;
    Person p1(1,"大师兄");
    Person p2(3,"三师弟");
    Person p3(2,"二师兄");
    m1.insert(make_pair(p1,10));
    m1.insert(make_pair(p2,20));
    m1.insert(make_pair(p3,30));
    printMap(m1);
    return 0;
}