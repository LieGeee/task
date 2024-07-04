#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    cin>>n;
    n/=1000;
    n=n%(24*60*60);
   // cout<<n<<endl;
    int x=0;
    while(n>=3600){
        x++;
        n-=3600;
    }
    if(x<10)  cout<<0<<x<<':';
    else cout<<x<<':';
    x=0;
    while(n>=60){
        x++;
        n-=60;
    }
    if(x<10) cout<<0<<x<<':';
    else cout<<x<<':';
    if(n>10) cout<<n;
    else cout<<0<<n;

}