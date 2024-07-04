#include <bits/stdc++.h>

using namespace std;

char ch;
int cnt;
void f()
{
    string a;int i=0,k;
    cin>>a;
    if(a[i]>'0' && a[i]<='9') cnt++;
    k= stoi(a.substr(0,cnt));

}
signed main()
{

    while(cin>>ch)
    {
        if(ch>='A' && ch<='z' ) cout<<ch;
        if(ch=='[')
            f();
    }
}