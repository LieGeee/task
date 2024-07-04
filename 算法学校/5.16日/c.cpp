#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;

       a.push(q);
    }
    int k;
    cin>>k;
    for(int i=1;i<k;i++){
        a.pop();
    }
     cout<<a.front();
}