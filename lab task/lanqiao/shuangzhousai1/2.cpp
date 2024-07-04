#include <bits/stdc++.h>
using namespace std;
int a[1048999];
int main()
{
    int n,m,cnt=1;
    string bei;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=1;j<=pow(2,i);j++){
           int t=pow(2,i)+j-1;
            a[t]=j;
//cout<<a[t]<<" ";
            }
cout<<endl;
       }
    for(int i=0;i<=1<<(n+1);i++) cout<<i<<' '<<a[i]<<endl;
    cout<<endl;

    for(int i=0;i<m;i++){
        int wei=1;cin>>bei;
       for(int j=0;j<bei.size();j++){
          if(bei[j]=='R') wei=wei*2+1;
          else wei=wei*2;
        }
        cout<<a[wei]<<endl;

    }
}