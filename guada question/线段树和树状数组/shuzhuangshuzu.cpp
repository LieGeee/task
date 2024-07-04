#include<iostream>

const int N=1e6+10;

struct Node{
    int l;
    int r;
    int sum;
}tr[4*N];
int a[N];
int z,l,r;
using namespace std;

void push_up(int u)
{
    tr[u].sum=tr[u<<1].sum+tr[u<<1|1].sum;
}

int built(int u,int l,int r)
{
    if(r==l)        tr[u]={l,r,a[r]};
        //tr[u].sum=a[l];
    else {

        tr[u]={l,r};

        int mid = l+r>>1;
        built(u << 1, l, mid);
        built(u << 1 | 1, mid + 1, r);
        push_up(u);
    }
}


int query(int u,int l,int r)
{

    if (l<=tr[u].l  && tr[u].r <= r) return tr[u].sum;   //当更新的区间被限定的区间包裹的时候,就可以返回了

    else {

        int mid = (tr[u].r + tr[u].l) >> 1;
        int sum = 0;
        if (mid >= l) sum += query(u << 1, l, r);

        if (r > mid) sum += query(u * 2 + 1, l, r);
        return sum;
    }
}

int modify(int u,int x,int shu) {
    if (tr[u].r == tr[u].l) tr[u].sum += shu;
    else {

        int mid = (tr[u].l + tr[u].r)>>1;
        modify(x <= mid ? u << 1 : u << 1 | 1, x, shu);
        push_up(u);
    }
}

int main()
{
    int n,m;

    cin>>n>>m;

    for(int i=1;i<n;i++) cin>>a[i];
    built(1,l,n);

    for(int i=1;i<=m;i++)
    {
        cin>>z>>l>>r;
        if(z==0) cout<<query(1,l,r)<<endl;
        if(z==1) modify(1,l,r);
    }
    return 0;
}