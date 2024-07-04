#include <bits/stdc++.h>
using namespace std;
int a[100000],b[100000],c[100000];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        b[i]=a[i]-a[i-1];
    }
    //  for(int i=0;i<n;i++) cout<<a[i]<<' ';
    // cout<<endl;
    // for(int i=1;i<=n;i++) cout<<b[i]<<' ';
    sort(b+1,b+n);
    //  cout<<endl;
    // for(int i=1;i<=n;i++) cout<<b[i]<<' ';
    cout<<b[n-m-1];
}