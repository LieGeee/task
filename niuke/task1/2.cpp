#include <bits/stdc++.h>

using namespace std;
int n,m,a[1000000],ans1;
int main(){


    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+n);


    for(int i=1;i<=n;i++) {
        if (m >= a[i]) ans1++;
        else {
            cout << ans1 << ' ' << m - a[i - 1];
            return 0;
        }
    }

}