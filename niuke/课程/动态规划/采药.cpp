#include <bits/stdc++.h>
#define debug(a) cout<<#a<<"="<<a<<' ';
#define lyh(i,a,b) for(int i=a;i<=b;i++)
#define mm memset
using namespace std;
int b[1100],c[1100];
int a[1010][1100];
int main(){
    int n,m;
    cin>>n>>m;
    mm(a,0,sizeof a);
    lyh(i,1,m) cin>>b[i]>>c[i];
    lyh(i,1,m) {
        lyh(j, 1, n) {
            if (j >= b[i]) {
                a[i][j] = max((a[i][j - 1], a[i - 1][j - b[i]] + c[i]),a[i-1][j]);
            }
            else a[i][j]=max(a[i-1][j],a[i][j-1]);
             cout<<a[i][j]<<' ';
        }
         cout<<endl;

    }
    cout<<a[m][n];
}