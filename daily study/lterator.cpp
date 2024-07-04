#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(10);

    for (int i = 0; i < data.size(); i++)
        cout << data[i]<<' ';  // 使用下标访问元素
cout<<endl;

    for (vector<int>::iterator iter = data.begin(); iter != data.end(); iter++)
        cout << *iter <<' ';  // 使用迭代器访问元素
        cout<<endl;
// 在C++11后可以使用 auto iter = data.begin() 来简化上述代码

}