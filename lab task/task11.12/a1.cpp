#include <bits/stdc++.h>

using namespace std;
int n,k;
int st[1000000],cnt;
void pususai(int x){
    for(int i=0;i<=x;i++) {
        if (!st[i]) {
            cnt++;
        }
    }
    for(int j=1;j<=n;j+=1) st[j]=true;
    //根本筛不了
}
void dfs(int ceng,int wei)
{
    if(wei == n)   {
        cout<<ceng+2;
    }
    if(ceng>=n){
        cout<<ceng<<' '<<k;
        return;
    }

    if(wei>n) {
        dfs(ceng+1,ceng+1);
        return ;
    }
    if(wei!=n)  dfs(ceng,wei+2+ceng);
}

int main()
{
    cin>>n;
    pususai(n);
    cout<<cnt<<' ';
    dfs(1,1);
}