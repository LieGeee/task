#include <bits/stdc++.h>

using namespace std;
int n,a,ans;
int lowbit(int a){
     return a&(~a+1);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        while(a) {
            a=a-lowbit(a);
            ans++;
        }cout<<ans<<' ';
        ans=0;
    }

}