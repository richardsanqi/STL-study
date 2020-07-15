#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void MyFunc(int val)
{
    cout<<"my num is "<<val<<endl;
}


int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    vector<int>::iterator v_begin=v.begin();
    vector<int>::iterator v_end=v.end();
    while (v_begin!=v_end)
    {
        cout<<"num is"<<*v_begin<<endl;
        v_begin++;
    }

    for(vector<int>::iterator v_beg=v.begin();v_beg!=v.end();v_beg++)
    {
        cout<<"number is "<<*v_beg<<endl;
    }

    for_each(v.begin(),v.end(),MyFunc);
    return 0;
    
}