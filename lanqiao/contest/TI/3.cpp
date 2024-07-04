#include <bits/stdc++.h>

using namespace std;
int n,m,a[2010],b[2010],c[2010],sc[2010],ssc[2010];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)   cin>>a[i];
    sort(a+1,a+n);

    for(int i=1;i<=n;i++) {
        cin>>b[i];
        if(a[i]-a[i-1]<=b[i])  c[i]=a[i]-a[i-1];
        else c[i]=b[i];

        sc[i]=c[i]+sc[i-1];
        ssc[i]=sc[i]+ssc[i-1];
        cout<<ssc[i]<<' ';
    }

    cout<<endl;
    int pos;;
    for(int i=n;i>0;i--)
        if( m>=ssc[i] ) {
        pos=i;
        break;;
    }
//
//    for(int i=0;i<=pos;i++){
//        a[i]+=ssc[i];
//        cout<<a[i];
//    }
    cout<<endl;
   int ans=10000;

    for(int i=1;i<pos;i++) ans=min(a[i]+sc[i],b[i]+a[i]);

    cout<<ans;

}