#include <bits/stdc++.h>



using namespace std;

int main()
{
    int a,b,c=0,k,zhong;
    cin>>k;
    for(int i=0;i<k;i++) {
        cin >> a >> b;

        while (a > b && a > 1 && b > 0) a-=2, b --, c++;

        while (a < b && a > 0 && b > 1) a--, b -= 2, c++;

       // cout<<a<<b<<c<<endl;
        if(a == b && a!=0 ) {
            zhong += a / 3;
            b -= zhong * 3;
            a -= zhong * 3;
        }
         //   cout<<zhong<<' '<<a<<b;
        if( (a>1 && b>0) || (a>0 && b>1) ) c++;
        cout<<c+zhong*2<<endl;
        c=zhong=0;
    }
}