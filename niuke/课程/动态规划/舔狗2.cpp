#include <bits/stdc++.h>

using namespace std;
const int mod=1e9+7;
long long a[10000];
int main(){
    a[1]=3,a[2]=9;
    int n;
    cin>>n;
    for(int i=3;i<10000;i++){
       // cout<<a[i-1]<<' '<<a[i-2]<<endl;
        a[i]=(a[i-1]+a[i-2])*2%mod;
    }
    while(n--){
        int f;
        cin>>f;
        cout<<a[f]<<endl;
    }
}