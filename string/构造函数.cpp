#include<iostream>
#include<string>
using namespace std;


/*
string();    //创建一个空的字符串，例如：string str;
string(const char* s);  //使用字符串s初始化
string(const string& str);  //使用一个string对象初始化另一个string对象
string(int n,char c);   //使用n个字符c初始化
*/


void test01()
{
    string s1;
    const char* str="hello world";
    string s2(str);

    //拷贝构造
    string s3(s2);
    string s4(10,'a');

    cout<<"s2 is "<<s2<<endl;
    cout<<"s3 is "<<s3<<"\n";
    cout<<"s4 is "<<s4<<"\n";
}

int main()
{
    test01();
    return 0;
}