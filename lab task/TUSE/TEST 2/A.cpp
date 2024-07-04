#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n & 1)
        cout<<3*n+1;
    else
        cout<<n/2;
}