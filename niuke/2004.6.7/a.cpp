#include <bits/stdc++.h>

using namespace std;
int n,m,biao,wei;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0},c[30],d[30];
char a[550][550];
int b[550][550];
int cnt;

void dfs(int x,int y){

    for(int i=0;i<4;i++){
        int nx=dx[i]+x,ny=dy[i]+y;
        if(nx>=0 &&nx<n && ny>=0 && ny<m && a[nx][ny]!='#' && b[nx][ny]==0 ){
           // cout<<1;
            c[int(a[nx][ny]-'a')]+=1;
            b[nx][ny]=1;
            cnt+=1;
            dfs(nx,ny);
        }

    }
}
int main(){

  cin>>n>>m;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>a[i][j];
      }
  }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           // cout<<1<<' '<<b[i][j];
            if(b[i][j]==0 && a[i][j]!='#') {
               // cout<<1;
                b[i][j] = 1;
                cnt=1;
                c[int(a[i][j]-'a')]+=1;
                dfs(i, j);

                for(int k=0;k<30;k++) {
                    if(c[k]>biao)  {
                        biao=c[k];
                        wei=k;
                    }
                }
                d[wei]+=1;
                biao=0,wei=0;
                memset(c,0,sizeof c);
                }
            }
        }

    for(int i=0;i<30;i++) if(d[i]!=0) cout<<char(i+'a')<<' '<<d[i]<<endl;
}