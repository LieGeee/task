1`  #include<iostream>

using namespace std;
int  sque[1000], row[1000],col[1000],zx[1000],yx[1000];
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
        if(!row[i] && !col[i] && !yx[r-i+n] && !zx[r+i] )
        {
            sque[r]=i;
            row[i]=true;
            col[i]=true;
            yx[r-i+n]=true;
            zx[r+i]=true;
            dfs(r + 1);
            row[i]= false;
            col[i]=false;
            yx[r-i+n]=false;
            zx[r+i]=false;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<cnt<<endl;
}