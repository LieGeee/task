#include <bits/stdc++.h>

using namespace std;
int a[10000];
int main()
{
    int n;
    int dismin,dismax;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
   // for(int i=0;i<n;i++) cout<<a[i]<<' ';
  //  cout<<endl;
    for(int i=n/2,j=n/2;j<n;i--,j++)
    {
    //    cout<<i<<' '<<j<<endl;
        if(a[i]*2<=a[j]){
            dismin=i;
            dismax=j;
            goto wai;
   //         cout<<"YES"<<' '<<i<<' '<<j<<endl;
        }
    }

    wai:
  //  cout<<' '<<dismin<<' '<<dismax<<endl;
    loop:
    while(a[dismin]*2<=a[dismax])
    {
    //    cout<<a[dismin]<<' '<<a[dismax]<<endl;
        dismax--;
    }
    while(a[dismin]*2<=a[dismax]){
        dismin++;
   //     cout<<a[dismin]<<' '<<a[dismax]<<' '<<1<<endl;
        goto loop;
    }
    dismin--;
 //    cout<<dismin<<' '<<dismax<<endl;
 //   cout<<a[dismin]<<' '<<a[dismax]<<endl;
    dismin++;dismax++;
 //  cout<<endl;
//    cout<<dismin<<' '<<dismax<<endl;
    int bian=min(dismin+1,n-dismax+1);
    cout<<n-bian;
}

