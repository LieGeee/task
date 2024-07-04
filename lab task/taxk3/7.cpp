#include <bits/stdc++.h>

using namespace std;
#define  long long int
signed main()
{
    freopen("wander.in","r",stdin);
    freopen("wander.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(sqrt(b*b+c*c)>=a) cout<<"Yes";
    else cout<<"No";
}