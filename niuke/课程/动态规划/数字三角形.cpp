#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k=1;
    cin>>n;
    for(int i=1;i<n+2;i++){
        for(int j=1; j<i ;j++,k++){
            printf("%4d",k);
        }
    cout<<endl;
    }
}