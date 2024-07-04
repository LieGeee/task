
#include <bits/stdc++.h>
using namespace std;
const int INF=INT_MAX;
int n,m;
int q,w,e;
int t;
int a[590][590];
int b[500][500];
int x[1000];
int v[1000];
int main()
{
    cin>>n>>t>>m;


    memset(a,0x3f3f,sizeof a);

    for(int i=1;i<=t;i++)   cin>>x[i];

    for(int i=1;i<=m;i++)
    {
       cin>>q>>w>>e;
       a[q][w]=e;
       a[w][q]=e;
    }

    for(int i=1;i<=n;i++)   a[i][i]=0;


    for(int i=1;i<=n;i++)        //最外层点
        for(int j=1;j<=n;j++)       //
            for(int k=1;k<=n;k++)
            {
                a[j][k]=min(a[j][k],a[j][i]+a[i][k]);

            }3
    int sum,ans=INT_MAX,z=0;

    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=t;j++)
        {
            sum+=a[i][x[j]];
        }
        if(ans>sum) {
            ans=sum;
            z=i;
        }
    }
    cout<<z;
}


