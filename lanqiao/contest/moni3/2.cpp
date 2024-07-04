#include <bits/stdc++.h>

using namespace std;
int ans;

int main(){

    for(int i=0;i<=100;i++)
        for(int j=0;j<=i-10;j++)
            if(i-j>=10) ans++;

    cout<<ans;
    }