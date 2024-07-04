#include <bits/stdc++.h>

using namespace std;

int a[1000000],s[1000000];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        s[i]=s[i-1]+a[i];
//        cout<<s[i]<<' ';
    }
   // cout<<endl;
    int m,q,w;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>q>>w;

        cout<<s[w-1]-s[q-2]<<endl;
    }

}