//栈 stack 先进后出
/*
入栈：  push
出栈：  pop
!!!!!!!!!!!!!!!!!!!!!!!!!!!栈不允许有遍历行为

栈可以判断容器是否为空？    可以，empty
栈可以返回元素个数？        可以，size
*/

#include <stack>
#include <iostream>
using namespace std;



int main()
{
    stack<int> s1;
    for(int i=0;i<5;++i)
    {
        s1.push(i);
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" "<<endl;
        s1.pop();
    }
    cout<<"栈的大小为 "<<s1.size();
    return 0;
}
