//queue常用接口
/*
    queue队列   先进先出
    不支持遍历（不改变原有变量数据）
    只能访问队首和队尾元素
*/
/*
    入队 --push
    返回队尾元素    --back
    出队        --pop
    判断队列是否为空    --empty
    返回队头元素    --front
    返回队列元素    --size
*/

#include <queue>
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    string name;
    int age;
};


int main()
{
    queue<Person> q;
    Person p1("1",24);
    Person p2("3",24);
    Person p3("4",231);
    Person p4("421",22);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<"队首元素名为 "<<q.front().name<<" "<<"队首年龄为 "<<q.front().age<<endl;
        cout<<"队尾元素名为 "<<q.back().name<<" "<<"队尾年龄为 "<<q.back().age<<endl;
        q.pop();
    }
    cout<<q.size()<<"\n";
    return 0;
}