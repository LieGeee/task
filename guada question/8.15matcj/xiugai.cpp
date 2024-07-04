#include<iostream>
#include <queue>
#include<cstring>
using namespace std;
struct node {
    char x;
    char y;
} A;
queue<node> c, d;
int dx[] = { 0, -1, -1, -1, 0, 1, 1, 1 };
int dy[] = { -1, -1, 0, 1, 1, 1, 0, -1 };

char a[1010][1010];
int B[1010][1010];
int C[1010][1010];
int m, n;

int main()
{
    cin >> n >> m; // 读取 n 和 m 的值

    for (int i = 0; i <= n; i++) for (int j = 0; j <= m; j++)  B[i][j] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'C') {
                A.x = i;
                A.y = j;
                C[i][j] = 0;
                c.push(A);
            }
            if (a[i][j] == 'D') {
                A.x = i;
                A.y = j;
                B[i][j] = 0;
                d.push(A);
            }
        }

    // 修正第一个 while 循环中的错误
    while (!d.empty())
    {
        node newd = d.front();
        d.pop();
        node newdk;
        for (int j = 0; j < 8; j++) {
            newdk.x = newd.x + dx[j];
            newdk.y = newd.y + dy[j];
            if (newdk.x >= 1 && newdk.x <= n && newdk.y >= 1 && newdk.y <= m && a[newdk.x][newdk.y] != '#')
            {
                d.push(newdk);
                B[newdk.x][newdk.y] = B[newd.x][newd.y] + 1;
            }
        }
    }

    for (int i = 0; i <= n; i++) for (int j = 0; j <= m; j++)  B[i][j] /= 2;

    // 修正第二个 while 循环中的错误
    while (!c.empty())
    {
        node newd = c.front();
        c.pop();
        node newdk;
        for (int j = 0; j < 8; j += 2) {
            newdk.x = newd.x + dx[j];
            newdk.y = newd.y + dy[j];
            if (newdk.x >= 1 && newdk.x <= n && newdk.y >= 1 && newdk.y <= m && a[newdk.x][newdk.y] != '#')
            {
                c.push(newdk);
                C[newdk.x][newdk.y] = C[newd.x][newd.y] + 1;
            }
        }
    }

    int row, col, cnt = 100086111;

    // 计算最终答案的逻辑，修正为只使用 C 数组
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++) {
            if (C[i][j] + B[i][j] <= cnt) {
                cnt = C[i][j] + B[i][j];
                row = i;
                col = j;
            }
        }
    }

    int ans = cnt; // 直接使用 cnt 作为答案
    cout << ans;
    return 0;
}
