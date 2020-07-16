#include <iostream>
#include <string>
using namespace std;

//字符串拼接
/*
string& operator+=(const char* str);    //重载+=操作符
string& operator+=(const char c);   //重载+=操作符
string& operator+=(const string& str);  //重载+=操作符
string& append(const char *s);  //把字符串s连接到当前字符串结尾
string& append(const char *s,int n);    //把字符串s的前n个字符链接到当前字符串结尾
string& append(const string &s);    //同operator+=(const string& str)
string& append*(const string &s,int pos,int n); //字符串s中从pos开始的n个字符连接到字符串结尾

*/
void test01()
{
    string str1="我";
    str1 +="爱打游戏";
    cout<<"str1 = "<<str1<<"\n";
    //const char str2=':';好像不能添加多个
    //str1 +=':::';
    str1 +=':';
    cout<<"str1 = "<<str1<<"\n";
    string str3="2K";
    str1 +=str3;
    cout<<"str1 = "<<str1<<"\n";
    str1.append(" and ");
    cout<<"str1 = "<<str1<<"\n";
    str1.append(" LOL ",4);
    cout<<"str1 = "<<str1<<"\n";
    str1.append(" lushi ");
    cout<<"str1 = "<<str1<<"\n";
    str1.append(" game abcd",0,7);
    cout<<"str1 = "<<str1<<"\n";
}


int main()
{
    test01();
    return 0;
}