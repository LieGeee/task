#include <bits/stdc++.h>

const int N=12;
using namespace std;
int n;
int u;
int book[2],a[N];
void dfs(int step)
{
    if(step==3)
    {
        for(int i=1;i<=n;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        if(book[i]==0)
        {
            a[step]=i;
            book[i]=1;
            dfs(step+1);
            book[i]=0;
        }
    }
    return;
}


int  main()
{
    cin>>n;
    dfs(1);
    return 0;
}