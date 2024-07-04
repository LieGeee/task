#include <bits/stdc++.h>

using namespace std;
int a[1000000];
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n+1;i<n*2+1;i++)
    {
        int j=i=n-1;
        a[i]=a[j];
    }
    for(int i=0;i<n*2-1;i++)
    {
        cout<<a[i];
    }
    for(int i=1;i<2*n;i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) cnt++;
        }
        if(cnt==n-1)
        {
            cout<<i;
            return 0;
        }
    }
}