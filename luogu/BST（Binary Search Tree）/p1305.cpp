#include <bits/stdc++.h>

using namespace std;

struct Node{
    char l;
    char r;
}tree[500000];
void dfs(char a)
{
    cout<<a;
    if(tree[a].l!='*') dfs(tree[a].l);
    if(tree[a].r!='*') dfs(tree[a].r);
}
int main()
{
    int n;
    cin>>n;
    char head,bg;
    cin>>bg>>tree[bg].l>>tree[bg].r;
    for(int i=1;i<n;i++){
        cin>>head>>tree[head].l>>tree[head].r;
    }
    dfs(bg);
}