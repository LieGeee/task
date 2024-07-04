#include <bits/stdc++.h>
using namespace std;
int a[100000],ji[100000],ou[100000];

int cmp(int a,int b)
{
return a>b;
}
int main()
{
    int n,j=0,o=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] & 1) {
            ji[j]=a[i];
            j++;
        }
        else {
            ou[o]=a[i];
            o++;
        }
    }
    int ans=0;
    sort(ji,ji+j,cmp);
    if(j&1) j-=1;
    for(int i=0;i<j;i++)
    {
        ans+=ji[i];
    }
    for(int i=0;i<o;i++)
    {
        ans+=ou[i];
    }
    cout<<ans;
}

