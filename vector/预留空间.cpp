//vector预留空间
/*
功能描述：
    减少vector在动态扩展容量时的扩展次数

函数原型：
    reserve(int len);   //容器预留len个元素场粗，预留位置不初始化，元素不可访问。
*/


#include <vector>
#include <iostream>
using namespace std;


int main()
{
    vector<int> v1;
    int num=0;
    int *p=NULL;
    v1.reserve(100000);
    for(int i=0;i<100000;++i)
    {
        v1.push_back(i);
        if(p!=&v1[0])
        {
            p=&v1[0];
            num++;
        }
    }
    cout<<"动态扩展次数为 "<<num<<endl;
    return 0;
}