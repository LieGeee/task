#include <bits/stdc++.h>
using namespace std;
int ans;
int main()
{
    string a,b;
    cin>>a;
    b=a;
    reverse(a.begin(),a.end());
    for(int i=0;i<=a.size();i++)
    {
        if(a[i]=='?' && b[i]!='?' ) ans++;
        else if(a[i]!='?' && b[i]=='?') ans++;
        else if(a[i]=='?' && b[i]=='?') ans*26;
        else if(a[i]!=b[i]) {
            if(a[i]!='?')
                if(b[i]!='?')
                {
                    cout<<0;
                    return 0;
                }
        }
    }
    cout<<ans/2;
}