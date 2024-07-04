#include<bits/stdc++.h>

using namespace std;

int n,m,cnt,ans;
char a[1000][1000];
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1,0,1};

typedef struct{
    int x,y;
}q;
queue <q> l;

void bfs(queue<q> *l){

    while(!l->empty()){
        q nk1=l->front();
        l->pop();
        for(int i=0;i<8;i++) {
            q nk2 = {nk1.x + dx[i], nk1.y + dy[i]};

            while (nk2.x > -1 && nk2.x < n && a[nk2.x][nk2.y] == 'W') {
                l->push(nk2);
                a[nk2.x][nk2.y] = '.';
            }
        }
        cnt=1;
    }

}
int main(){

    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
        {
            cnt=0;
            if(a[i][j]=='W') {
                l.push({i, j});
                bfs(&l);
            }
            ans+=cnt;
        }
    }
    cout<<ans;
}