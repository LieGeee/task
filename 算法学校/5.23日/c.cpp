#include <bits/stdc++.h>

using namespace std;

int len;

bool qw(string a, int pos) {
    if (pos >= len / 2) return true;
    if (a[pos] == a[len - pos - 1]) return qw(a, pos + 1);
    return false;
}

int main() {
    string a;
    cin >> a;
    len = a.length();
    cout << (qw(a, 0) ? "yes" : "no") << endl;
    return 0;
}
