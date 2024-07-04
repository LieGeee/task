#include<bits/stdc++.h>
#define debug(a) cout<<#a<<"="<<a<<endl;
#define lyh(i,a,b) for(int i=a;i<=b;i++)
#define hyl(i,a,b) for(int i=a;i>=b;i--)
#define LL long long
#define mm memset
#define EPS 1e-8
#define INF 0x7fffffff
LL a[101010],b[101010],dp[100000];
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

   lyh(i,1,m)   cin>>a[i]>>b[i];

   lyh(i,1,m) {
       hyl(j, n, a[i]) {
           dp[j] = max(dp[j],dp[j - a[i]] + b[i]*a[i]);
       }
      // lyh(j,0,n) cout<<dp[j]<<' ';
     //  cout<<endl;
   }
   cout<<dp[n];
}
