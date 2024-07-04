#include<bits/stdc++.h>
#define debug(a) cout<<#a<<"="<<a<<endl;
#define lyh(i,a,b) for(int i=a;i<=b;i++)
#define hyl(i,a,b) for(int i=a;i>=b;i--)
#define LL long long
#define mm memset
#define EPS 1e-8
#define INF 0x7fffffff
using namespace std;

int a[1010],b[1010],dp[1010];
int main(){
    int n,m;
    cin>>n>>m;
    lyh(i,1,m) cin>>a[i]>>b[i];


    lyh(i,1,m){
        hyl(j,n,1){
            if(j>=a[i]){
                dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
            }
        }
        lyh(j,1,n) cout<<dp[j]<<' ';
        cout<<endl;
    }
    cout << dp[n] << endl;
    }

