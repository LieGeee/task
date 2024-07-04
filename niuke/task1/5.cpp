
#include <bits/stdc++.h>

using namespace std;
char a[300][300],dz[]={'y','x','z','s'};
int dx[]={0,1,0,-1},dy[]={1,0,-1,0},b[300][300];;
int n,m,t=123123123,ans=1010101010;
void dfs(int x,int y,char dir,int u);
void cdfs(int x,int y,int u);

void dfs(int x,int y,char dir,int u){

    for(int i=0;i<4;i++){
        if(x+dx[i]<n && y+dy[i]<m && x+dx[i]>=0 && y+dy[i]>=0 && dir==dz[i] && (a[x+dx[i]][y+dy[i]]=='.'||a[x+dx[i]][y+dy[i]]=='*'||a[x+dx[i]][y+dy[i]]=='T'))
        {
        //    cout<<x+dx[i]<<' '<<y+dy[i]<<' '<<u+1<<endl;
            if(a[x+dx[i]][y+dy[i]]=='*')    cdfs(x+dx[i],y+dy[i],u+1);
            if(a[x+dx[i]][y+dy[i]]=='.')   dfs(x+dx[i],y+dy[i], dir,u+1);
            if(a[x+dx[i]][y+dy[i]]=='T') {
              //  cout<<111<<' '<<x+dx[i]<<' '<<y+dy[i]<<' '<<u+1<<endl;
                ans=min(u+1,ans);
            }
        }

    }
    }

void cdfs(int x,int y,int u){
  //  cout<<x<<' '<<y<<' '<<"aqqa"<<' '<<u<<endl;
  //  cout<<x<<' '<<y<<' '<<u<<endl;
    if(b[x][y] == 0 || u<b[x][y]) {
        b[x][y]=u;
        dfs(x, y , 'y', u );
        dfs(x , y, 'x', u );
        dfs(x, y , 'z', u );
        dfs(x , y, 's', u );
    }
}
int main(){
    cin>>t;
    while(t--){
    ans=123123123;
        cin>>n>>m;
    int sx,sy;
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
            if (a[i][j] == 'S') sx=i,sy=j;
        }
    }
    cdfs(sx,sy,0);
    if(ans==123123123) cout<<-1<<endl;
    else cout<<ans<<'\n';
    }
}