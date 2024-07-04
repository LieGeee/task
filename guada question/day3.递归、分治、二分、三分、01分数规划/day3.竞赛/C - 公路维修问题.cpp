#include<iostream>
#include <algorithm>
using namespace std;

int m,n,sum;


struct Node{
    int a;
    int b;
}node[1000000];

bool cmp(struct Node a,struct Node b)
{
    return a.b>b.b;
}

int main()
{
    cin>>n>>m;

    node[0].a=0;
    for(int i=1;i<=n;i++) cin>>node[i].a;
    for(int i=2;i<=n;i++) node[i].b=node[i].a-node[i-1].a;

    int mina=node[1].a;
    int maxw=node[n].a;
    sort(node+1,node+n+1,cmp);

   for(int i=1;i<=m-1;i++)   sum+=node[i].b;

    cout<<maxw-mina-sum+m;
}
