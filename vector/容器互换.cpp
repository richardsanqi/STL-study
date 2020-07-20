//vector 容器互换
/*
v1.swap(v2);    //swap可以使两个容器互换，可以达到使用的收缩内存效果
*/
#include <vector>
#include <iostream>
using namespace std;


void printVector(vector<int> &v)
{
    for(vector<int> ::iterator it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}


int main()
{
    vector<int> v1;
    for(int i=0;i<5;++i)
    {
        v1.push_back(i);
    }
    printVector(v1);
    vector<int> v2;
    for(int i=0;i<10;++i)
    {
        v1.push_back(i);
    }
    printVector(v2);
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
    for(int i=0;i<100000;++i)
    {
        v1.push_back(i);
    }
    cout<<"容量为 "<<v1.capacity()<<endl;
    cout<<"大小为 "<<v1.size()<<endl;
    v1.resize(3);
    cout<<"容量为 "<<v1.capacity()<<endl;
    cout<<"大小为 "<<v1.size()<<endl;
    vector<int> (v1).swap(v1);
    cout<<"容量为 "<<v1.capacity()<<endl;
    cout<<"大小为 "<<v1.size()<<endl;
    return 0;
}