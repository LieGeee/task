//
// Created by leizh on 2023/8/2.
//

#include<iostream>

long long a,b;
using namespace std;

int gcdk(long long a,long long b)
{
    if(b == 0) return a;
    return gcdk(b,a%b);
}


int main()
{
    cin>>a>>b;

    cout<<gcdk(a,b)<<' '<<a*b/gcdk(a,b);

}
