/*
不用想根前一个数差多少,没必要把原数组处理成差分数组(我在干嘛为什么要处理->直接就够早好了),只用对后续的处理进行差分统计

*/

#include <bits/stdc++.h>
using namespace std;
int m,n,q,a[1100][1100],b[1100][1100];

int main()
{
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }

    int x1,x2,y1,y2,c;
    while(q--){
        cin>>x1>>y1>>x2>>y2>>c;
        b[x1][y1]+=c;
        b[x1][y2+1]-=c;
        b[x2+1][y1]-=c;
        b[x2+1][y2+1]+=c;
    }
    //这里不能直接+a[i][j],因为是差分矩阵,没有意义
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+b[i][j];    //????????????????????????/
          //  cout<<b[i][j]<<' ';
        }
     //   cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]+=b[i][j];
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}
