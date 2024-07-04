#include<bits/stdc++.h>
using namespace std;
long long n;
int ans;
int main() {
    cin>>n;
    for(int i = 0; i <= n/(i*i*i); i++){
        for(int j=0;j<=n/(i*i*i);j++){
            for(int k=0;k<=n/(i*i*i);k++){
                if(i*j*k==n)
                    ans++;
            }
        }
    }
    cout<<ans;
}