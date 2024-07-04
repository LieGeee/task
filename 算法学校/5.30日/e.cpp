#include<bits/stdc++.h>

using namespace std;

int n,x;
int dfs(int x,int n){
    if(n==1) {
        cout<<x<<' ';
        return x;
    }
     dfs(x,n/2)*dfs(x,n/2);
}
int main(){

    int k=0;
    cin>>x>>n;
    n&1?k=1:k=0;
    cout<<k<<endl;
    if(k==1){
        cout<<dfs(x,n)*n;
    }
    else {
        cout<<dfs(x,n);
    }
}