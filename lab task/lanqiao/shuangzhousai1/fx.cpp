#include <bits/stdc++.h>
using namespace std;
int a[1048999];
int main()
{
    int n,m,cnt=1;
    string bei;
    cin>>n>>m;
    for(int i=1<<n;i<=1<<(n+1);i++){
        a[i]=cnt;
        cnt++;
    }
    for (int i = (1 << n) - 1; i > -1; i--)  a[i]=max(a[i*2],a[i*2+1])/2;
    for(int i=0;i<=1<<(n+1);i++) cout<<i<<' '<<a[i]<<endl;
    cout<<endl;

    for(int i=0;i<m;i++){
        int wei=1;cin>>bei;
       for(int j=0;j<bei.size();j++){
          if(bei[j]=='R') wei=wei*2+1;
          else wei=wei*2;
        }
        cout<<a[wei]<<endl;
        wei=1;
    }

}