#include<bits/stdc++.h>
using namespace std;
int n,t,p,ans;
bool kk[7][100010];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p>>t;
        kk[p][t]=1;
    }
    for(int i=1;i<=6;i++){
        for(int j=1;j<=100010;j++){
            if(kk[i][j]==1) {
                ans++;
                j=j+59;
            }
        }
    }
    cout<<ans;
    return 0;
}