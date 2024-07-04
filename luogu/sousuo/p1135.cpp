#include <bits/stdc++.h>


using namespace std;
int  n,a,b,cnt,cnt_step;
int step[5000];
int choose[5000];   //来确保选或者没选
int updown[5000];   //确保上升或者下降
void dfs(int a)
{
    if(a==b)
    {
        step[cnt]=cnt_step;
        cnt++;
    }
    for(int i=0;i<n;i++)
    {
        if(a!=b) {
            choose[i]=1;
            dfs( a + step[i]);

            choose[i]=2;
            dfs( a - step[i]);
        }
        else


    }
}

int built[5000];
int main()
{
    cin>>n>>b>>a;
    for(int i=0;i<n;i++)  cin>>built[i];
    dfs(a);
}