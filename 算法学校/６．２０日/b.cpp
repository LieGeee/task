#include <bits/stdc++.h>

using namespace std;

int a[1000],b[1000],ans;
int main(){

    int n=0,m=0;
    /*while(cin>>a[i] && a[i-1]!='\n') {
        i++;
        a[i]-='0';
    }
    while(cin>>b[i] && b[i-1]!='\n')  {
        j++;
        b[j]-='0';
    }*/
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);

    int i=0,j=0;
    while(i<n || j<=m){
        cout<<a[i]<<' '<<b[j];
        if(a[i]<=b[j]){
            j++;

        }
        else{
            i++,j++;
            ans+=1;
        }


    }
    cout<<ans;
}