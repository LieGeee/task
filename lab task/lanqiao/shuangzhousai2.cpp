#include<bits/stdc++.h>

using namespace std;

struct Node{
    int a;
    int b;
}q[100000];
int cmp(struct Node a,struct Node b)
{
    return a.b>b.b;
}
int w[100000];
int main()
{
    int n,m;
    cin>>n>>m;
    cin>>q[1].a;

    for(int i=2;i<=n;i++)
    {
        cin>>q[i].a;
        q[i].b=q[i].a-q[i-1].a;
        cout<<q[i].b<<endl;
    }
    sort(q+1,q+n-1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<q[i].b<<' ';
    }
    int ans=0;
    for(int i=m;i<=n;i++)
    {
        ans+=q[i].b;
    }
    cout<<ans;

}
