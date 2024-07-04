#include<bits/stdc++.h>

using namespace std;
int n, k;
int a[3];

bool find(int x) {
    for (int i = 0; i < 3; i++) {
        if (x == a[i]) {
            return false;
        }

    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        cin >> k;

        if (k == 0) {
            if (find(k)) {
                cout << 1;
            } else cout << 0;
            if (k == 1) {
                if (find(k)) {
                    if (find(0)) {
                        cout << 1;
                    } else {
                        cout << 2;
                    }
                } else {
                    cout << 0;
                }
            }
            if (k == 2) {
                if (find(k)) {
                    if (find(0) && find(1)) {
                        cout << 3;
                    } else if (find(0) or find(1)) {
                        cout << 2;
                    } else {
                        cout << 1;
                    }
                } else {
                    cout << 0;
                }

            }
        }
    }
}
