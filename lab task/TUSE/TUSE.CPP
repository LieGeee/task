#include <iostream>
#include<queue>

using namespace std;
const int N=1e4+10;
int row[N][3],col[N][3],a[N][N];
int ans;
int dx[]={-1,1};
int dy[]={-1,1};
struct Node{
    bool dir;
    int loc;
}dian;
queue<Node>s;
int main() {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j]==1) {
                row[i][1]++;
                col[i][1]++;
            }
            else if(a[i][j]==2) {
                row[i][2]++;
                col[i][2]++;
            }
            for (int k = 1; k < 3; k++) {
                if (row[i][k] == n) {
                    dian.dir = 0;
                    dian.loc = i;
                    s.push(dian);
                }
                if (col[j][k] == n) {
                    dian.dir = 0;
                    dian.loc = j;
                    s.push(dian);
                }
            }
        }
    }
    while (!s.empty()) {
        Node gai;
        gai = s.front();
        s.pop();

        if (gai.dir == 0) {
            for (int i = 1; i <= n; i++) {
                if (a[gai.dir - 1][i] == 1 && a[gai.dir + 1][i] == 1) {
                    a[gai.dir][i] = 1;
                    ans++;
                    col[i][1]++;
                    if (col[i][1] == n) {
                        dian.dir = 0;
                        dian.loc = i;
                        s.push(dian);
                    }

                } else if (a[gai.dir - 1][i] == 2 && a[gai.dir + 1][i] == 2) {
                    a[gai.dir][i] = 2;
                    col[i][2]++;
                    ans++;
                    if (col[i][2] == n) {
                        dian.dir = 0;
                        dian.loc = i;
                        s.push(dian);
                    } else a[gai.dir][i] = 0;
                }
            }

            if (gai.dir == 1) {
                for (int i = 1; i <= n; i++) {
                    if (a[i][gai.dir - 1] == 1 && a[i][gai.dir + 1] == 1) {
                        a[gai.dir][i] = 1;
                        col[i][1]++;
                        ans++;
                        if (col[i][1] == n) {
                            dian.dir = 0;
                            dian.loc = i;
                            s.push(dian);
                        }
                    }
                    if (a[i][gai.dir - 1] == 2 && a[i][gai.dir + 1] == 2) {
                        a[gai.dir][i] = 2;
                        col[i][2]++;
                        ans++;
                        if (col[i][2] == n) {
                            dian.dir = 0;
                            dian.loc = i;
                            s.push(dian);
                        }
                    } else a[gai.dir][i] = 0;
                }
            }
        }
    }
    cout << ans;
}