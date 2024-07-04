#include <bits/stdc++.h>

using namespace std;

struct Node
{
    string a;
}s[1010000];

int main()
{
    int n;
    int cnt=0,ans=0;
    string c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
       reverse(c.begin(),c.end());
       s[i].a=c;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
        for(int k=0;k<=s[i].a.size()-1;k++){
            if(s[j].a.size() <  s[i].a.size()) break;
            if(s[i].a[k] == s[j].a[k])  cnt++;
        }
        if(cnt==s[i].a.size()) ans++;
        cnt=0;
        }
        cout<<ans<<endl;
        ans=0;
    }

}