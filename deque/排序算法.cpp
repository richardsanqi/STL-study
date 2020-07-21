//排序 默认排序规则 从小到大 升序
//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
//vector容器也可以利用sort进行排序

#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;


void printDeque(const deque<int> &d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    deque<int> d1;
    d1.push_back(100);
    d1.push_front(12);
    d1.push_back(23);
    d1.push_back(2213);
    printDeque(d1);
    //冒泡排序
    for(int i=0;i<d1.size();++i)
    {
        for(int j=i;j<d1.size();++j)
        {
            if(d1[i]<d1[j])
            {
                int temp=d1[j];
                d1[j]=d1[i];
                d1[i]=temp;
            }

        }
    }
    printDeque(d1);
    sort(d1.begin(),d1.end());
    printDeque(d1);
    return 0;
}