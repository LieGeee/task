#include <bits/stdc++.h>


using namespace std;
int n,ans=-1;
struct Node{
    int l;
    int r;
}tree[1000000];
void dfs(int pos,int deep){
    ans=max(ans,deep);
 //   cout<<pos<<' '<<tree[pos].l<<' ';
//    cout<<deep<<"    ";
    if(tree[pos].l) dfs(tree[pos].l,deep+1);
    if(tree[pos].r) dfs(tree[pos].r,deep+1);
}
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tree[i].l>>tree[i].r;
    }
    dfs(1,1);
    cout<<ans;
}