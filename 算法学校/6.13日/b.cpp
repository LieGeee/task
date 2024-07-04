#include <bits/stdc++.h>

using namespace std;
int a[100],g,n,minx=100;
bool b[100];
int dfs(int i,int w){
    if(w==g) {
        int cnt=0;
        for(int j=0;j<n;j++)    if(b[j]) cnt++;
        minx=min(cnt,minx);
        return 0;
    }
    if (i>=n||w>g) return false;
    b[i]=1;
    dfs(i+1,a[i]+w);
    b[i]=0;
    dfs(i+1,w);
    return 0;

}


int main(){
    cin>>n>>g;
    for(int i=0;i<n;i++) cin>>a[i];
    dfs(0,0);
    cout<<minx;
}
