#include <bits/stdc++.h>

using namespace std;
int a[10000],b[100000];
int main()
{
    int n,ans=-111111110;

    cin>>n;
   // memset(b,-1,sizeof b);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(a[i]>a[j])   b[i]=max(b[i],b[j]+1);
            ans=max(b[j],ans);
        }
        for(int k=0;k<n;k++)   cout<<b[k]<<"  ";
        cout<<endl;
    }
    cout<<ans+1;
}