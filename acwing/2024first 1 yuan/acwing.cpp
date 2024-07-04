#include <bits/stdc++.h>

using namespace std;
int n,a[10000],b[10000];
int checkq(int x){
    for(int i=0;i<n;i++){
        if(x==0 )  return false;
        if(a[i]/x < b[i]) return false;
    }
    return true;
}

int checkr(int x){

    for(int i=0;i<n;i++){
        if(x==0 )  return false;
        if(a[i]/x > b[i]) return true;
    }
    return false;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int l=0,r=1e8+1000;
    while(l<r){

        int mid=l+r>>1;
        if(checkr(mid))  l=mid+1;
        else r=mid;

    }
    cout<<l+1<<' ';
    l=0,r=1e9+1000;
    while(l<r){
        int mid=l+r>>1;
        if(checkq(mid))  l=mid+1;
        else r=mid;
      //  cout<<l<<' '<<r<<endl;
    }
    cout<<l-1;
}