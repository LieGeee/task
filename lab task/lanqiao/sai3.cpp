#include<bits/stdc++.h>
int cmp(int a,int b)
{
    return a>b;
}
using namespace std;
#define int long long
int a[1001000],b[1001000];
signed main()
{
    int n,m;
    cin>>n>>m;
    cin>>a[0];

    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i]-a[i-1];
//        cout<<b[i]<<' ';
        //cout<<q[i].b<<endl;
    }
//    cout<<endl;
    sort(b,b+n+1,cmp);
//    for(int i=0;i<=n;i++)
//    {
//        cout<<b[i]<<' ';
//    }
    int ans=0;
    for(int i=m-1;i<=n;i++)
    {
        ans+=b[i];
    }
    cout<<ans;

}
