#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t,r;
    long long a=0,b=0;
    int ans=0;
    cin>>n>>t>>r;
    for(int i=0;i<n;i++){
        cin>>b;

        a+=b;
        if(a>=t) a=t;
        a-=r;
        if(a<0) a=0,ans+=1;
    }
    cout<<ans;
}