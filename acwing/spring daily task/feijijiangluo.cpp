#include <bits/stdc++.h>

struct Node{
    int kai;
    int oil;
    int hao;
}q[10100];






{
    if(a.hao>=b.hao) {
        if (a.hao == b.hao) return a.oil < b.oil;
    }
    else return a.oil>b.oil;
}
using namespace std;
int main()
{
    int n,m;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>q[j].kai>>q[j].oil>>q[j].hao;
        }
        sort(q,q + m,cmp);

    }
}