#include <bits/stdc++.h>

using namespace std;

priority_queue<int> q;
bool cmp(int z,int w){
    return z>w;
}
int a[1000],b[1000];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);

    for(int i=n;i>=0;i--){
        if(a[i]>)
    }
}