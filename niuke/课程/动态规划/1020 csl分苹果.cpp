#include<bits/stdc++.h>
#define debug(a) cout<<#a<<"="<<a<<endl;
#define lyh(i,a,b) for(int i=a;i<=b;i++)
#define hyl(i,a,b) for(int i=a;i>=b;i--)
#define LL long long
#define mm memset
#define EPS 1e-8
#define INF 0x7fffffff
LL a[101010],b[101010],dp[100100];
using namespace std;
int main(){
    int n;
    cin>>n;
    LL k=0;
    lyh(i,1,n) {
        cin>>a[i];
        k+=a[i];
    }
    k/=2;

    lyh(i,1,n)
        hyl(j,k,a[i])
            dp[i]=max(dp[j],dp[j+a[i]]+a[i]);

    cout<<dp[k]<<' '<<k*2-dp[k];


}