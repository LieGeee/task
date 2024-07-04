#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    for(int i=0,j=a.length()-1;i!=j-1;i++,j--){
       // cout<<a[i]<<' '<<a[j];
        if(a[i]!=a[j]) {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
}