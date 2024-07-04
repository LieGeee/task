#include <iostream>

using namespace std;

int a[100000],b[100000];
int main() {

    int n;
    int k = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        b[i]=1;
        for (int j = 1; j <=n; j++) {
            if (a[j] < a[i]) b[i] = max(b[j] + 1, b[i]);
            k = max(b[i], k);
        }
    }
    cout<<k;    
}





