#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100100],zm[100100],zb[100100],ze[100100];
int c[100100],s[100100];

int check(int x) {
    memset(c,0,sizeof c);
    for(int i=1;i<=x;i++){
        c[zb[i]]+=zm[i];
        c[ze[i+1]]-=zm[i];
    }
    for(int i=1;i<n;i++){
     s[i]=c[i]+s[i-1];
     if(a[i]<s[i])   return false;
    }
    return true;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>zm[i]>>zb[i]>>ze[i];
    }
    int l=0,r=m;
    while(l<r){
        int mid=l+r>>1;
        if(check(mid)) l=mid+1;
        else r=mid;
    }
    if(r==n) cout<<0;
    else    cout<<"-1"<<'\n'<<l;
}


