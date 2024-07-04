#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {


        string a;
        cin >> a;
        int q = 0;
        for (int i = 0; i < a.length() && q==0; i++)
            for (int j = 0; j < a.length() && q==0; j++) {
                if (a[i] != a[j]) {
                    cout << "YES" << endl;
                    swap(a[i],a[j]);
                    cout<<a<<endl;
                    q = 1;

                }
            }
        if (q == 0) cout << "NO" << endl;
    }
}