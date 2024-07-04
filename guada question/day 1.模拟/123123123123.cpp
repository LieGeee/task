#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e6;
int a[N], s[N];

int main() {
    int n;
    cin >> n;
    while (n--) {
        int num, maxr;
        cin >> num >> maxr;
        for (int i = 0; i < num; i++) cin >> a[i];

        // Calculate prefix sum array s
        s[0] = a[0];
        for (int i = 1; i < num; i++) {
            s[i] = a[i] + s[i - 1];
        }

        int l = 0, r = 0; // Initialize l and r to 0
        int ans = 100000;

        while (l < num && r < num) {
            if (s[r] - (l > 0 ? s[l - 1] : 0) < maxr) {
                r++;
            }

            if (s[r] - (l > 0 ? s[l - 1] : 0) >= maxr) {
                ans = min(r - 1, ans);
                l++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

