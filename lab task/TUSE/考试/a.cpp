#include <bits/stdc++.h>
using namespace std;
long long a[200200];

int main()
{
    int n;
    cin>>n;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+1+n);
    for(int i=2;i<=n+1;i++)
    {
        if(a[i]==a[i-1]) b++;
        else{
            cout<<a[i-1]<<' '<<b<<endl;
            b=1;
        }
    }

}
