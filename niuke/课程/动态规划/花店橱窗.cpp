#include <bits/stdc++.h>

using namespace std;
int a[1000][1000];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    //计算边界 i=1->m-n+i

    for(int i=0;i<n;i++)
        for(int j=i;j<m-n+i;j++){
            a[i][j]=max(a[i-1][j-1]+a[i][j],a[i-1][j]);
    }

}