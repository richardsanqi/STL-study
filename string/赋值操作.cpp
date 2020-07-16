#include<iostream>
#include<string>
using namespace std;


//注意事项
// string s3;
//   s3='a';//赋值可以
//    string s3='a';//这个会报错，直接初始化不行
/*
给string字符串进行赋值
string& operator=(const char* s);   //char*类型字符串赋值给当前的字符串
string& operator=(const string &s); //把字符串s赋值给当前的字符串
string& operator=(char c);  //字符赋值给当前的字符串
string& assign(const char* s);  //把字符串s赋值给当前的字符串
string& assign(const char *s,int n);    //把字符串s的前n个字符赋值给当前的字符串
string& assign(const string &s);    //把字符串s赋值给当前的字符串
string& assign(int n,char c);   //用n个字符c赋值给当前字符串
*/
void test01()
{
    string s1="hello world";
    cout<<"s1= "<<s1<<"\n";
    string s2=s1;
    cout<<"s2= "<<s2<<"\n";
    string s3;
    s3='a';
    cout<<"s3= "<<s3<<"\n";
    string s4;
    s4.assign(s1);
    cout<<"s4= "<<s4<<"\n";
    string s5;
    //s5.assign(s1,5);这个报错？？但是s4却没报错
    s5.assign("hello world",5);
    cout<<"s5= "<<s5<<"\n";
    string s6;
    s6.assign(s1);
    cout<<"s6= "<<s6<<"\n";
    string s7;
    s7.assign(2,'w');
    cout<<"s7= "<<s7<<"\n";


}


int main()
{
    test01();
    return 0;
}