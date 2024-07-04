#include <bits/stdc++.h>
using namespace std;

int n, x,k=1;
int dfs(int x, int n) {
    if(n==1) return x;
    if(n&1) k=x;
    return  dfs(x,n / 2)*dfs(x,n / 2);
    x=1;
}

int main() {
    cin>>x>>n;
    cout<<dfs(x, n)*k<<endl;
    return 0;
}
