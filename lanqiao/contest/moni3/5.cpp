#include <bits/stdc++.h>

using namespace std;
int n=30,m=20,a[100][100],s[100][100];
int main(){

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            s[i][j]=a[i][j]+s[i-1][j]-s[i][j-1]+s[i-1][j-1];
        }

    int ans;
    for(int i=6;i<=n;i++)
        for(int j=6;j<=m;j++){
            ans=max(s[i][j]-s[i][j-6]-s[i-6][j]+s[i-6][j-6],ans);
        }
    cout<<ans;
}