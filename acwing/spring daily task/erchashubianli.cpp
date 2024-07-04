#include <bits/stdc++.h>

using namespace std;
int k;
string a;
void dfs()
{
    if(a[k]=='#'){
        k++;
        return;
    }
    char r=a[k++];
    dfs();
    cout<<r<<' ';
    dfs();
    dfs();
}

int main()
{
    cin>>a;
    dfs();
}




