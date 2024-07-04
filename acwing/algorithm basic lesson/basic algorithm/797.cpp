#include <bits/stdc++.h>

using namespace std;

int a[100100],b[100100];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i]-a[i-1];
    }
    while(m--){
        int l,r,c;
        cin>>l>>r>>c;
        b[l]+=c,b[r+1]-=c;
    }
    for(int i=1;i<=n;i++){
        a[i]=b[i]+a[i-1];
        cout<<a[i]<<' ';
    }
}