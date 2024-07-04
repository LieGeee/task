

#include<iostream>
#include <algorithm>
using namespace std;
int a[4010][4010];
int b[4010][4010][2];
int  k,l;
int cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    for(int i=0;i<=n+1;i++) {
        for (int j = 0; j <= m + 1; j++)
            cout << a[i][j]<<' ';
        cout << endl;
    }

    cout<<endl;
    for(int i=1;i<=3020;i++)
        for (int j = 1; j <=3020 ; j++) {
            b[i][j][0] = b[i - 1][j - 1][0]  + a[i][j];
            b[i][j][1] = b[i - 1][j + 1][1]  + a[i][j];
        }
    cout<<endl;
    for(int i=0;i<=n+1;i++) {
        for (int j = 0; j <= m + 1; j++)
            cout << b[i][j][0]<<' ';
        cout << endl;
    }
    cout<<endl;
    for(int i=0;i<=n+1;i++) {
        for (int j = 0; j <= m + 1; j++)
            cout << b[i][j][1]<<' ';
        cout << endl;
    }

    int i=n;
    for(int j=1;j<=3020;j++) k=max(b[i][j][0],k);
    for(int j=1;j<=3020;j++) l=max(b[i][j][1],l);

    cout<<max(k,l);
}

