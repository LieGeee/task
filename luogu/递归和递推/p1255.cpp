#include <bits/stdc++.h>
#define int long long
using namespace std;
int f[5000]={1,1};
int fbi(int a)
{
    if(f[a]!=0) return f[a];
    return f[a]=fbi(a-1)+fbi(a-2);
}

signed main()
{
    int a;
    cin>>a;
    cout<<fbi(a);
}