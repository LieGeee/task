#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int cnt=0;
    for(int i=0;a[i]!='0' && i<a.size();i++){
        if(a[i]=='0') cnt++;
    }
    for(int i=a.size()-1;i>=-1;i--)
    {
        if(i==-1){
            cout<<cnt;
            return 0;
        }
       int num = a[i]-'0';
        if(num & 1) cnt++;
        else {
            cout << cnt;
            return 0;
        }
    }
}