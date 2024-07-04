#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int N=30;
long long a[N][N];
int x,y;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main() {
    int n, m;
    cin >> n >> m >> x >> y;

    a[0][1] = 1;

    for (int k = 0; k < 8; k++)
        if(x+dx[k]+1>0 && y + dy[k]+1>0)
            a[x + dx[k]+1][y + dy[k]+1] =-1;

    a[x+1][y+1]=-1;
    for (int i = 1; i <= n+1; i++) {
        for (int j = 1; j <= m + 1; j++) {
            if (a[i][j] == -1) a[i][j] = 0,cout<<a[i][j]<<' ';
            else {
                a[i][j] = a[i - 1][j] + a[i][j - 1];
                cout << a[i][j] << ' ';

            }

        }
        cout << endl;
    }
    cout << a[n + 1][m + 1];
}