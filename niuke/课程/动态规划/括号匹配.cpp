#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll a1, b1, c1, a2, b2, c2;
ll n, m, res = 0;
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        ll a = a1, b = b1 + (1.0 * a2 / b2), c = c1 + 1.0 * c2 / b2;
        double ans = b * b / (4 * a) - b * b / (2 * a) + c;
        if (ans == 0)
            cout << 1;
        if (a > 0) {
            if (ans > 0)
                cout << "INF";
            if (ans < 0)
                cout << 0;
        }
        if (a < 0) {
            if (ans < 0)
                cout << "INF";
            if (ans > 0)
                cout << 2;
        }
    }
}