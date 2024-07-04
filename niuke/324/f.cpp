#include<bits/stdc++.h>
int a[110000],b[1000000], ret;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0,j=0;i<n;i++){

        b[a[i]]++;
        while(b[a[i]]>1){
            b[a[j]]--;
            j++;
        }
        ret=max(ret,i-j+1);
    }

    cout<<ret;

}