#include <iostream>

int path[10];
int state[10];
int n;
using namespace std;

void dfs(int u) {
    if(u > n) {
        for (int i = 1; i <= n; i++)
            cout << "    " << path[i];
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!state[i]) {
            path[u] = i;
            state[i] = 1;
            dfs(u + 1);
            state[i] = 0;
        }
    }

}

int main()
{
    cin>>n;
    dfs(1);
    return 0;
}
