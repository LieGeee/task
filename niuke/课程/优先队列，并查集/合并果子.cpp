#include <bits/stdc++.h>

using namespace std;

priority_queue<int>a;
int x,ans;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        cin>>x;
        a.push(-x);
    }

    for(int i=0;i<n-1;i++){
        int t1=a.top();
        // cout<<t1<<' ';
        a.pop();
        int t2=a.top();
        a.pop();
        // cout<<t2<<endl;
        ans+=(t1+t2);

        a.push(t1+t2);
    }

    cout<<-ans;
}