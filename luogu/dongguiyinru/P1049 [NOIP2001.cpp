#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[50];
    int f[100000];
    for(int i=1;i<=m;i++)   cin>>a[i];
    for(int j=0;j<=24;j++)  cout<<j<<' ';
   cout<<endl;

    for(int i=0;i<=m;i++){
        for(int j=n;j>=a[i];j--){
            if(f[j]<f[j-a[i]]+a[i])
            f[j]=f[j-a[i]]+a[i];
        }

        for(int j=0;j<=n;j++){
           cout<<f[j]<<' ';
            }
        cout<<endl;
    }
  //  cout<<endl;
    cout<<n-f[n];
}