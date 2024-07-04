#include <iostream>

using namespace std;


int a[440010],b[440010];

int main()
{
    int n,k=-1000000;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++) {
        b[i] = max(b[i - 1], 0ll) + a[i];
       k=max(b[i],k) ;
    }

    cout<<k;



}
