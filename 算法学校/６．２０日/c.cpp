#include <bits/stdc++.h>

using namespace std;
int a[1000],ans;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(m>=a[i])
            m-=a[i];
        else{
            m=70;
            m-=a[i];
            ans++;
        }
    }
    cout<<ans;
}