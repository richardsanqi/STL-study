#include <iostream>
#include <string>
using namespace std;


/*
string& insert(int pos,const char*s);   //插入字符串
string& insert(int pos,const string& str);  //插入字符串
string& insert(int pos,int n,char c);   //在指定位置插入n个字符c
string& erase(int pos,int n=npos);  //删除从pos开始的n个字符
*/


void test()
{
    string s1="hello";
    s1.insert(1,"111");
    char a[]="a";
    cout<<s1<<endl;
    s1.insert(1,a);
    cout<<s1<<endl;
    s1.insert(4,6,'a');
    cout<<s1<<"\n";
    s1.erase(0,3);
    cout<<s1<<"\n";
}


int main()
{
    test();
    return 0;
}