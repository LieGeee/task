#include <bits/stdc++.h>



using namespace std;

int main()
{
    long long a,b,ans=0,bz;
    cin>>a>>b;
    bz=b;
    while(bz<a){
        if(b%2 == 0) {
            b=b/2;
            bz+=b;
        }
        else {
            b=b*3+1;
            bz+=b;
        }
        ans++;
    }
    cout<<ans+1;

}