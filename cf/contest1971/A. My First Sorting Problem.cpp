#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,n;
    cin>>n;
    while(n--) {
        cin >> a >> b;

        cout << min(a, b) << ' ' << max(a, b) << endl;
    }

}