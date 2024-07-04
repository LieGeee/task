#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;
long long a[2][3]={1,1,1};long long sum,q;
int b[10000];
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++) cin>>b[i];
    sort(b,b+t);
    for(int i=0;i<t;i++) cout<<b[i]<<' ';
    for(int i=0;i<100010;i++)
    {
        if((i+2)%3) for(int j=0;j<3;j++)    a[(i+1)%2][j%3]=(a[i%2][(j+1)%3]+a[i%2][(j+2)%3]+a[i%2][j%3])% MOD;
        else for(int j=0;j<3;j++) a[(i+1)%2][j%3]=(a[i%2][(j+1)%3]+a[i%2][(j+2)%3])% MOD;

        cout<<i<<' ';
        for(int j=0;j<3;j++) cout<<a[i%2][j]<<' ';
        cout<<endl;

        if(b[q]==i+1 && q<t) {
            for(int j=0;j<3;j++) sum+=a[i%2][j];
            q++;
            cout<<sum<<endl;
        }
        else if(q==t) return 0;

    }



}