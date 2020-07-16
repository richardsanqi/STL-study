/*
string查找和替换
功能描述：
查找：查找指定字符串是否存在
替换：在指定的位置替换字符串

函数原型：
int find(const string& str,int pos=0) const;    //查找str第一次出现位置，从pos开始查找
int find(const char* s,int pos=0) const;    //查找s第一次出现位置，从pos开始查找
int find(const char*s,int pos,int n) const; //从pos位置查找s的前n个字符串第一次位置
int find(const char c,int pos=0) const; //查找字符c第一次出现位置
int rfind(const string& str,int pos=npos) const;    //查找str最后一次位置，从pos开始查找
int rfind(const char* s,int pos=npos) const;    //查找s最后一次出现位置，从pos开始查找
int rfind(const char c,int pos=0) const;    //查找字符c最后一次出现的位置
string& replace(int pos,int n,const string& str);   //替换从pos开始n个字符为字符串str
string& replace(int pos,int n,const char*s);    //替换从pos开始的n个字符为字符串s
*/


#include <iostream>
#include <string>
using namespace std;


//查找
//find 方法是从左往右查找，rfind则是从右往左找，函数返回字串第一个字符的位置，
//若字串不存在，则返回-1
void test01()
{
    string s1="acsjdklasd";
    int pos=s1.find("sj");
    if(pos==-1)
    {
        cout<<"没有该字串"<<"\n";
    }
    else
    {
        //下标从0开始
        cout<<"第一个字符的起始位置为 "<<pos<<"\n";
    }
    
}


//替换 若替换字符长度超过用户定义的位置也会自动添加所有
void test02()
{
    string s1="hello";
    s1.replace(1,3,"1111");
    cout<<"替换后的字符为 "<<s1<<"\n";
}

int main()
{
    test01();
    test02();
    return 0;
}