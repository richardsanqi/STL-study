#include <vector>
#include <iostream>
using namespace std;


//vector 嵌套vector
int main()
{
    //外面的<   >需要保持间隔
    //vector<vector<int>> 会报错
    vector< vector<int> > V;

    //大容器添加小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    

    //小容器添加数据
    for(int i=0;i<4;++i)
    {
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
    }

    V.push_back(v1);
    V.push_back(v2);
    V.push_back(v3);

    for(vector< vector<int> >::iterator it=V.begin();it!=V.end();++it)
    {
        for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();++vit)
        {
            cout<<" "<<(*vit)<<" ";
        }
        cout<<endl;
    }
    return 0;
}