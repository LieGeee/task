#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    int cnt,ans=-1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                if(a[k]==a[j]) cnt++;
            }
            ans=max(cnt,ans);
            cnt=0;
        }
        if(ans==3) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        ans=0;
    }
}