#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> a[1000];
    int n, t = 1;
    cin >> n;
    for (int i = 1 << n; i < 1 << (n + 1); i++) {
        cin >> a[i].first;
        a[i].second = t;
        t++;
    }
    for (int i = (1 << n) - 1; i > 1; i--)  a[i].first=max(a[i*2].first,a[i*2+1].first);


    if (a[2].first > a[3].first) cout << a[3<<(n-1)].second;
    else cout << a[2<<(n-1)].second;


//cout<<endl;p4715
//    for(int i=0;i<1<<(n+1);i++)
//    {
//        cout<<a[i].first<<' ';
//    }
//    cout<< endl;
//
//    for(int i=0;i<1<<(n+1);i++)
//    {
//        cout<<a[i].second<<' ';
//    }
}