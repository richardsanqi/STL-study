#include  <map>
#include <iostream>
#include <algorithm>
using namespace std;

void MyFunc(pair<int,int> val)
{
    cout<<"key is "<<val.first<<" "<<val.second<<endl;
}

void printMap(const map<int,int> &m)
{
    for_each(m.begin(),m.end(),MyFunc);
    cout<<endl;
}

int main()
{
    map<int,int> m1;

    //第一种方式
    m1.insert(pair<int,int>(1,10));

    //第二种方式(推荐)
    m1.insert(make_pair(2,20));

    //第三种方式
    m1.insert(map<int,int>::value_type(3,30));

    //第四种
    m1[4]=40;

    //[]不建议插入，用途可以利用key访问到value，因为如果出现没插入这个key，然后map给你自动插入了
    printMap(m1);
    cout<<m1[5]<<endl;
    printMap(m1);
}