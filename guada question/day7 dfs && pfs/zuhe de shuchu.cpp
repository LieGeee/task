#include <iostream>
#include <iomanip>


using namespace std;
int n,u,m;

int path[30];
int state[30];

void dfs(int u,int start)
{
    if(u>m) {
        for (int i = 1; i <= m; i++)
            cout << setw(3) << path[i];
        cout<<endl;
        return;
    }
    for(int i=start;i<=n;i++) {
        if (!state[i]){     //如果数字没有被用过{
            path[u] = i;
            state[i] = 1;
            dfs(u + 1,i+1);
            state[i] = 0;
        }
    }
}

int main()
{
    cin>>n>>m;
    dfs(1,1);
}
