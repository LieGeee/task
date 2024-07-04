#include<iostream>
#include <queue>
#include<cstring>
using namespace std;
struct node {
    int x;
    int y;
}A;
queue<node> c,d;
int dx[]={0,-1,-1,-1,0,1,1,1};
int dy[]={-1,-1,0,1,1,1,0,-1};

char a[1010][1010];
int B[1010][1010];
int C[1010][1010];
int row,col,cnt=1006111;
int D[1010][1010];
int m,n;

int main()
{
    cin>>n>>m;
    for(int i=0;i<=n;i++)   for(int j=0;j<=m;j++)  B[i][j]=1;

    for(int i=0;i<=n;i++) {
        for (int j = 0; j <= m; j++) cout << B[i][j] << ' ';
        cout<<endl;
    }


    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'C')
            {
                A = {i, j};
                C[i][j] = 0;
                c.push(A);
                // cout<<A.x<<' '<<A.y<<endl;
            }
            else if (a[i][j] == 'D')
            {
                A = {i, j};
                B[i][j] = 1;
                d.push(A);
                cout<<A.x<<' '<<A.y<<endl;
            }
            else if(a[i][j] == '#')
            {
                B[i][j] = 99999999;
                C[i][j] = 99999999;
            }
            else
            {
                B[i][j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= m; j++) cout << B[i][j] << ' ';
        cout<<endl;
    }

    while(!d.empty() )
    {
         node newd = d.front();
            d.pop();
            node newdk;
            for (int j = 0; j < 8; j++) {
                newdk.x = newd.x + dx[j];
                newdk.y = newd.y + dy[j];
                if(newdk.x>=1 && newdk.x<=n && newdk.y>=1 && newdk.y<=m && a[newdk.x][newdk.y]!='#' && B[newdk.x][newdk.y] == 1 )
                {

                    B[newdk.x][newdk.y]=B[newd.x][newd.y]+1;
//                    for(int l=1;l<=n;l++) {
//                        for (int z = 1; z <= m; z++) cout << B[l][z] << ' ';
//                        cout<<endl;
//                    }
//                    cout<<endl;
                    d.push(newdk);

                }
                else continue;
                
            }
    }

    for(int i=0;i<=n;i++)   for(int j=0;j<=m;j++)  B[i][j]/=2;
    for(int l=1;l<=n;l++) {
        for (int z = 1; z <= m; z++) cout << B[l][z] << ' ';
        cout<<endl;
    }


    while(!c.empty() )
    {
        node newd = c.front();
        c.pop();
        node newdk;
        for (int j = 0; j < 8; j+=2) {
            newdk.x = newd.x + dx[j];
            newdk.y = newd.y + dy[j];
            if(newdk.x>=1 && newdk.x<=n &&newdk.y>=1 && newdk.y<=m && a[newdk.x][newdk.y]!='#' && C[newdk.x][newdk.y] == 0)
            {
                c.push(newdk);
                C[newdk.x][newdk.y]=C[newd.x][newd.y]+1;
                cout<<endl;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) {

            if (C[i][j] + B[i][j] <= cnt) {
                cnt = C[i][j] + B[i][j];
                row = i;
                col = j;
            }
        }
    }

    if (cnt == 1006111) {
        int ans = max(C[row][col], D[row][col]);
        cout << "YES" << endl;
        cout << ans << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}