#include <bits/stdc++.h>

using namespace std;
int n,m;
const int N=30;
int way[N]={1};

void dfs(int u,int w){
    if(u==m+1){
        for(int i=1;i<=m;i++) cout<<way[i];
        cout<<endl;
        return;
    }
    for (int i=w;i<=n ;i++){
        if(way[u-1]==1) way[u]=i;
        dfs(u+1,i+1);
        way[u] = 0;
    }

}
int main()
{
    cin>>n>>m;

    dfs(1,1);

    return 0;
}