#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> a[10000];
int q,w,e;
int main()
{
    int n,m,f;

    cin>>n>>m>>f;
    memset(a,127,);
    for(int i=1;i<=m;i++) {
        cin >> q >> w >> e;
        a[q].emplace_back(w,e);
    }


}