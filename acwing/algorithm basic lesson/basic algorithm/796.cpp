#include <bits/stdc++.h>

using namespace std;
int a[10000][10000],s[10000][10000];

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    int n,m,q;
    cin>>n>>m>>q;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            s[i][j]=a[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        }
//    for(int i=1;i<=n;i++) {
//        for (int j = 1; j <= m; j++) {
//            cout << s[i][j] << ' ';
//        }
//        cout << endl;
//    }

    int f1,f2,r1,r2;
    while(q--){
        cin>>f1>>f2>>r1>>r2;
        //cout<<s[r1][r2]<<' '<<s[r1][f2-1]<<' '<<s[f1-1][r2]<<' '<<s[f1-1][f2-1];

        cout<<s[r1][r2]-s[r1][f2-1]-s[f1-1][r2]+s[f1-1][f2-1]<<endl;
    }
}

//算矩阵减去面积的时候,要注意sn只是对横纵坐标分别相加最后得到的,计算矩阵时候用类似计算sn的方法实际上忽略了两组数s[r1][f2-1],s[f1-1][r2]