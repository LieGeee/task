#include <bits/stdc++.h>

using namespace std;

int main(){
    char b=0;
    int ans=0,c=0;
    while(cin>>b && b!=EOF){
        c+=b-'0';
//        cout<<c<<endl;
        if(!c%9) ans++;

    }
      cout<<ans;

}