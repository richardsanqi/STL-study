//字符串比较 比较的是ascii码
/*compare
> 1
= 0
< -1
*/


#include <iostream>
#include <string>
using namespace std;


void test()
{
    string s1="hello";
    string s2="hello";
    if(s1.compare(s2)==0)
    {
        cout<<"两个字符串内容相同"<<endl;
    }
    else if(s1.compare(s2)==1)
    {
        cout<<"s1>s2 assii码"<<"\n";
    }
    else
    {
        cout<<"s1<s2 ascii码 "<<"\n";
    }
    
}


int main()
{
    test();
    return 0;
}