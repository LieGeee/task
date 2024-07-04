#include <iostream>
#include <queue>
#include<cstring>
using namespace std;
int dx[8]={-1,-2,-2,-1,1,2,2,1};
int dy[8]={-2,-1,1,2,2,1,-1,-2};
const int N=1e6;
int a[N];
int n,m,xf,yf;
int path[500][500];
struct Node{
    int x;
    int y;
};
queue<Node> s;
bool bfs(struct Node k){
    while(!s.empty()) {
        Node newk=s.front();
        Node newk1;
        s.pop();
        for (int i = 0; i < 8; i++) {
            newk1.x = dx[i] + newk.x;
            newk1.y = dy[i] + newk.y;
            if (newk1.x > 0 && newk1.x <= n && newk1.y <= m && newk1.y > 0 && path[newk1.x][newk1.y] == -1) {
                path[newk1.x][newk1.y] =path[newk.x][newk.y]+1;
                s.push(newk1);
            }
            else    continue;
        }
    }
}
int main()
{

    cin>>n>>m>>xf>>yf;
    memset(path, -1, sizeof(path));
    path[xf][yf]=0;
    Node fir = {xf,yf};
    s.push(fir);
    bfs(fir);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << path[i][j] << ' ';
        cout<<endl;
    }
}

