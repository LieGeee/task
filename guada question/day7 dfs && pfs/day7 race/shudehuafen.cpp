#include <iostream>

using namespace std;
int n,m;
int ans;

void dfs(int x,int dui,int sum)
{
    if(dui==1)
        {
            return;
            ans++;
        }

    for(int i=x;i<=sum-i;i++)
    {
        dfs(i,dui-1,sum-i);
    }

}

