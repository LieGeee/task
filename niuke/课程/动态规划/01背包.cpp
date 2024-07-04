#include <bits/stdc++.h>

using namespace std;
const int mod = 998244353;
long long a[1000000],ans=1,q;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        long long k=pow(m,a[i]);
        ans+=(k+q*k ) % mod;
       // cout<<q*k<<' '<<k<<' '<<ans<<endl;
        q=k;
    }
    if(n==0) cout<<1;
    else if(m==0) cout<<n+1;
    else cout<<ans;
}