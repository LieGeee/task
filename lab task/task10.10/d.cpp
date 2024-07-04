#include<iostream>
using namespace std;
int  sque[1000], rw[1000],cl[1000],zx[1000],yx[1000];
int n,r,cnt=0;
void dfs(int r)
{
    if(r>n)
    {
        cnt++;
        if(cnt<=3){
            for(int i=1;i<=n;i++)   cout<<sque[i]<<' ';
            cout<<endl;}
    }
    else
        for(int i=1;i<=n;i++) {
            if(!rw[i] && !cl[i] && !yx[r-i+n] && !zx[r+i] )
            {
                sque[r]=i;
                rw[i]=1;
                cl[i]=1;
                yx[r-i+n]=1;
                zx[r+i]=1;
                dfs(r + 1);
                rw[i]= 0;
                cl[i]=0;
                yx[r-i+n]=0;
                zx[r+i]=0;
            }
        }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<cnt<<endl;
}