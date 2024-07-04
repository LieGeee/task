#include <bits/stdc++.h>

using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
typedef struct Node{
    int x;
    int y;
}z;
char f[1000][1000];
queue<Node> s;
int n,m;
bool bfs() {
    while (!s.empty()) {
        Node newk = s.front();
        Node newk1;
        s.pop();
        for (int i = 0; i < 4; i++) {
            newk1 = {dx[i] + newk.x, dy[i] + newk.y};
            cout<<f[newk1.x][newk1.y];
            if (newk1.x > 0 && newk1.x < n && newk1.y < m && newk1.y > 0 && f[newk1.x][newk1.y] == '.') {
                f[newk1.x][newk1.y] = 'o';
                s.push(newk1);

                for(int m=0;m<n;m++)
                {
                    for(int j=0;j<n;j++){
                        cout<<f[n][m]<<' ';
                    }
                    cout<<endl;
                }
            }
        }
    }
}
int main()
{

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>f[i][j];
    }
   // cout<<f[n-1][m-1];
    s.push({0,0});
    bfs();
   // cout<<f[n-1][m-1];
    if(f[n-1][m-1]=='o') cout<<"Yes";
    else cout<<"No";

}