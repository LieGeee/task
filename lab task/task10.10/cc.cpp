#include <bits/stdc++.h>

using namespace std;
bool a[5000][5000];
bool b[5000][5000];
bool biao[5100][5100];
#define  int long long
int n,m,dis,ans;
int w[10000];
void dfs(int chu,int q){
    if (chu == dis)
        w[q] = 1;
    //     cout<<"come here";
    //  for(int i=0;i<m;i++){
        for(int j=0;j<=m;j++){
            if(biao[chu][j]==0 && b[chu][j]==1){
                biao[chu][j]=1;
                cout<<chu<<' '<<j<<endl;
                dfs(j,q);
                biao[chu][m]=0;
        }
    }
//}

    }

signed main()
{

    cin>>n>>m;

    for(int i=0;i<m;i++){
        int j,k;
        cin>>j>>k;
        a[j][k]=1;         //j开通k结尾
        a[k][j]=1;
        b[j][k]=1;         //j开通k结尾
        b[k][j]=1;
    }
  //  cout<<a[5][6]<<endl;
    int chu;
    cin>>chu>>dis;
    for(int i=chu+1;i<dis;i++){
        for(int j=0;j<=m;j++)
        {
            b[i][j]=0;
            b[j][i]=0;
        }
        int q=i;
        dfs(chu,q);
        for(int j=0;j<=m;j++)
        {
            b[i][j]=a[i][j];
            b[j][i]=b[j][i];
        }
    }
    for(int i=0;i<n;i++) cout<<w[i]<<' ';
    cout<<endl;
    for(int i=;i<n;i++) if(w[i] == 0) ans++;
    cout<<ans;
}