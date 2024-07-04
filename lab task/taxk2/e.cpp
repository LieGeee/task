#include <bits/stdc++.h>


using namespace std;
long long ans=1;
int k=0;
const int mod = 7 + 1e9;
int main()
{
    string a;
    cin>>a;
        for(int i=0,j=a.size()-1;i<=j;i++,j--) {
            // cout<<i<<' '<<j<<endl;
            //   cout<<a[i]<<' '<<a[j]<<endl;
            if (a[i] != a[j] && i != j) {
                if (a[i] != '?')
                    if (a[j] != '?') {
                        cout << 0;
                        return 0;
                    }
            }
            if (a[i] == '?' && a[j] == '?') ans *= 26;

            //  else if(a[i]=='?' || a[j]=='?' )  ans+=1;

            if(a[i]=='?' || a[j]=='?') k= 1;
            ans%=mod;
        }
    if (k)
        cout << ans  << endl;
    else
        cout << 0;
}