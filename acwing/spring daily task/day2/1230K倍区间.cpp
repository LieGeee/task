#include<bits/stdc++.h>
#define int long long
int n,k,ans;
int s[100100],cnt[100100];

using namespace std;
signed main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        s[i]+=s[i-1];
    }
    cnt[0]=1;
    for(int i=1;i<=n;i++){
        ans+=cnt[s[i]%k];
        cnt[s[i]%k]++;
    }

    cout<<ans;
}