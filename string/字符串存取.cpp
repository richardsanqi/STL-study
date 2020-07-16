//字符串读取
/*
1.通过[]方式
2.通过at方法
*/
#include <iostream>
#include <string>
using namespace std;


void test()
{
    string s1="hello";
    //1.[]方式
    for(int i=0;i<s1.length();++i)
    {
        cout<<s1[i]<<" ";
    }
    cout<<"\n";
    //2.at方式
    for(int i=0;i<s1.size();++i)
    {
        cout<<s1.at(i)<<" ";
    }
    cout<<"\n";
    //字符串更改
    s1[0]='x';
    s1.at(1)='x';
    cout<<s1<<endl;
}


int main()
{
    test();
    return 0;
}