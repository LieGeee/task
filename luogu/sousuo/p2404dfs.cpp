#include <bits/stdc++.h>

using namespace std;

int k;
int dis[4000];
void dfs(int n,int start)
{
    if(n==0){
        if(dis[0]==k) return;
        for(int i=0;dis[i]!=0;i++)
        {
            cout<<dis[i];
            if (dis[i + 1] != 0) cout << "+";
            else cout<<endl;
        }
    }
    for(int i=start;i<=k;i++)
    {
        if(n>=1)
        {
            for(int j=dis[i-1];j<=k;j++){
                dis[i]=j;
                if(n-j>=0)
                    dfs(n-j,i+1);
                else return;
                dis[i]=0;
                dis[i+1]=0;//这一行是猜出来的,但为什么为什么为什么为什么
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    k=n;
    dfs(n,0);
}