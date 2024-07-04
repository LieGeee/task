#include <bits/stdc++.h>

using namespace std;
int  t[1000000],c[1000000];
int dp[4000][4000];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>t[i]>>c[i];
    }

    for(int i=1;i<=m;i++){
        for(int  j=n;j>0;j--){
            if(j>=t[i]){
                dp[i][j]=max(dp[i-1][j-t[i]]+c[i],dp[i-1][j]);
                // cout<<dp[i][j]<<' '<<i<<' '<<j<<endl;
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[m][n];
}