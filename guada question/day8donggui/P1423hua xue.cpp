#include <iostream>
#include <cstring>
using namespace std;

int dx[]={-1,0,1,0};
int dy[]= {0,-1,0,1};
int a[110][110];
int b[110][110];


int main()
{
    memset(a,-1, sizeof  a);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }

for(int i=1;i<=n;i++){
    for(int j=1;i<=n;j++){
        for(int k=0;k<=4;k++){
            if(a[i][j]>a[i+dx[k]][j+dy[k]])
            {
                b[i][j]=
            }
        }
    }
}



}
