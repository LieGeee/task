#include<bits/stdc++.h>

using namespace std;

int n,m,a[1000000],s[100000];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    int l,r;
    while(m--){
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;
    }
}