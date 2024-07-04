#include <bits/stdc++.h>

using namespace std;

int c[5][5] = {
        0, -1, 1, 1, -1,
        1, 0, -1, 1, -1,
        -1, 1, 0, -1, 1,
        -1, -1, 1, 0, 1,
        1,1,-1,-1,0
};
int a[12000], b[12000];
int q, e;
int main()
{
    int n, na, nb;
    cin >> n >> na >> nb;

    for (int i = 1; i <= na; i++)    cin >> a[i];
    for (int i = 1; i <= nb; i++)    cin >> b[i];
    int i = 1, j = 1;
    for(int k=1;k<=n;k++)
    {
        q = max(q, c[a[i]][b[j]] + q);
        e = min(e, c[a[i]][b[j]] + e);

        i >= na ? i = 1 : i++;
        j >= nb ? j = 1 : j++;

    }
    cout << q << ' ' << -e;
}
