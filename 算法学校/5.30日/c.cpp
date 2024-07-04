#include <bits/stdc++.h>

using namespace std;
int maxs=-1000000,mins=100000000;
int a[10000];
void dfs(int l,int r){
    if(r==l) return;
    else{
        int mid=l+r>>1;
        maxs=max(max(a[l],a[r]),maxs);
        mins=min(min(a[l],a[r]),mins);
        dfs(0,l);
        dfs(l+1,r);
    }
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dfs(0,n-1);
    cout<<mins<<' '<<maxs;
}