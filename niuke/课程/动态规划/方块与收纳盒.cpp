#include <bits/stdc++.h>

using namespace std;
int f[10000];
int main(){
    int t;
    cin>>t;
    f[1]=1,f[2]=2;
    for(int i=3;i<100;i++){
        f[i]=f[i-1]+f[i-2];
    }
    while(t--){
        int a;
        cin>>a;
        cout<<f[a]<<endl;
    }
}