#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    int ans=0;
    cin>>a>>b;
    if(a %2 != 0) ans++;
    if(b %2 != 0) ans++;
    if(a== 1) cout<<"Brown";
    else cout<<"Alice";
}