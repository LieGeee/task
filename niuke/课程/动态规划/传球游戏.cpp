#include<bits/stdc++.h>

using namespace std;

int a[1000][1000];
int main(){
    int n,m;

    cin>>n>>m;
    a[0][0]=1;
    for(int i=1;i<=m;i++){

        for(int j=0;j<n;j++){
            if(j>0 && j<n-1)
                a[i][j]=a[i-1][j-1]+a[i-1][j+1];
            else if(j==0){
                a[i][j]=a[i-1][n-1]+a[i-1][j+1];
            }
            else    a[i][j]=a[i-1][n-2]+a[i-1][0];
        }

//        for(int j=0;j<n;j++) cout<<a[i][j]<<' ';
//        cout<<endl;

    }
    cout<<a[m][0];
}