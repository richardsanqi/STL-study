/*
pair对组创建
功能描述：
    成对出现的数据，利用对组可以返回两个数据
两种创建方式：
    pair<type,type> p(value1,value2);
    pair<type,type> p=make_pair(value1,value2);
    */

#include <iostream>
using namespace std;

void test()
{
    //第一种方式
    pair<string,int> p("hello",29);
    //第二种方式
    pair<int,string> p1=make_pair(22,"djak");
    cout<<p1.second<<endl;
    cout<<p.first<<endl; 
}

int main()
{
    test();
    return 0;
}
