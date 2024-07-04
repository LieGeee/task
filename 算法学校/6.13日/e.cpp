#include <bits/stdc++.h>
using namespace std;
int a[100],g,n,dp[100];
bool b[100];
int dfs(int i,int w,int j){
    if(w==g) {
        for(int j=0;j<n;j++)    if(b[j]) cout<<a[j]<<' ';
        cout<<endl;
        return 0;
    }
    if (i>=n||w>g) return false;
    b[i]=1;
    dfs(i+1,a[i]+w,dp[i]+j);
    b[i]=0;
    dfs(i+1,w,0);
    return 0;
}
int main(){
    cin>>n>>g;
    for(int i=0;i<n;i++) cin>>a[i]>>dp[i];
    dfs(0,0,0);
}
