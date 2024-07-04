#include <bits/stdc++.h>

using namespace std;
char a[10001000];
int main()
{
    memset(a,-1,sizeof a);
  //  a[0]=-1;
    int n;
    cin>>n;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    k=0;
    for(int i=0;i<10000100;i++){
        if(a[i]!=-1){
            k+=i+1;
            cout<<i<<' '<<k<<endl;
        }
    }
    cout<<k;
}