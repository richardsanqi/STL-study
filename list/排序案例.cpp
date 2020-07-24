//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名，年龄，身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

#include <iostream>
#include <list>
#include <string>
using namespace std;

class Person
{
    public:
        Person(string name,int age,double high)
        {
            this->name=name;
            this->age=age;
            this->high=high;
        }
        string name;
        int age;
        double high;
};

bool myCompare(Person &p1,Person &p2)
{
    if(p1.age==p2.age)
    {
        return p1.high>p2.high;
    }
    return p1.age<p2.age;
}

void printPerson(const list<Person> &l)
{
    for(list<Person>::const_iterator it=l.begin();it!=l.end();++it)
    {
        cout<<"name is "<<it->name<<" "<<"age is "<<it->age<<" "<<it->high<<endl;
    }
    cout<<"---------"<<endl;
}

int main()
{
    list<Person> l1;
    Person p1("1",23,178);
    Person p2("2",24,173);
    Person p3("3",24,175);
    Person p4("4",22,168);
    l1.push_back(p1);
    l1.push_back(p2);
    l1.push_back(p3);
    l1.push_back(p4);
    printPerson(l1);
    l1.sort(myCompare);
    printPerson(l1);
    return 0;
}