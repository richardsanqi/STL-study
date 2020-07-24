//自定义数据只有规定好了排序规则，才能利用set容器插入。否则插入失败

#include <iostream>
#include <set>
#include <string>
using namespace std;

class Person
{
    public:
    Person(string name,int age)
    {
        this->m_age=age;
        this->m_name=name;
    }
        string m_name;
        int m_age;

};

class MyCompare
{
    public:
        bool operator()(const Person &p1,const Person &p2)
        {
            return p1.m_age<p2.m_age;
        }
};

void printSet(const set<Person,MyCompare> &s)
{
    for( set<Person,MyCompare> ::const_iterator it=s.begin();it!=s.end();++it)
    {
        cout<<"name is "<<it->m_name<<" "<<"age is "<<it->m_age<<"\n";
    }
    cout<<endl;
}

int main()
{
    set<Person,MyCompare> s1;
    Person p1("sadka",2213);
    Person p2("dasdj",123123);
    Person p3("kjasddkasj",21);
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3); 
    printSet(s1);
    return 0;
}