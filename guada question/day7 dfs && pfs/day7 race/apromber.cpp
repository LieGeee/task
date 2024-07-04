#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int m, x, y, path[1000001];

int bfs(int s, int dis)
{
    memset(path, -1, sizeof(path));
    queue<int> q;
    q.push(s);
    path[s] = 0;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == dis)
            return path[x];

        if (x - 1 >= 0 && path[x - 1] == -1)
        {
            q.push(x - 1);
            path[x - 1] = path[x] + 1;
        }

        if (x + 1 <= 10000 && path[x + 1] == -1)
        {
            q.push(x + 1);
            path[x + 1] = path[x] + 1;
        }

        if (2 * x <= 10000 && path[2 * x] == -1)
        {
            q.push(2 * x);
            path[2 * x] = path[x] + 1;
        }
    }

    return -1;
}

int main()
{
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        cout << bfs(x, y) << endl;
    }
}
