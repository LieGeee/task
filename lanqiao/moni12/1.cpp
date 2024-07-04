#include <bits/stdc++.h>

using namespace std;

long long n;
int main(){
    cin>>n;
    long long l=0,r=1000100000;
    while(l<r){
        long long mid=(l+r)>>1;
        if((1+mid)*mid>=2*n) r=mid;
        else l=mid+1;
       // cout<<l<<' '<<r<<endl;
    }
    cout<<l;
}
