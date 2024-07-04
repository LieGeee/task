#include <bits/stdc++.h>

using namespace std;
int n,t;
int b[100000];
int main()
{
    cin>>t;
    int k=1;
    string a;
    while(k<=t){
        int ans=0;
        cin>>n>>a;
        a=' '+a;
        for(int i=1;i<=n;i++){
            b[i]=a[i]-'0'+b[i-1];
      //      cout<<b[i]<<' ';
        }
    //    cout<<endl;
        for(int i=(n+1)/2;i<=n;i++){

            ans=max(ans,b[i]-b[i-(n+1)/2]);
          //  cout<<i<<' '<<b[i]<<' '<<i-n/2<<' '<<b[n+1]<<endl;
        }
        cout<<"Case #"<<k<<':'<<ans<<endl;
        k++;
    }
}