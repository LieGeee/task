#include<bits/stdc++.h>

using namespace std;

int a[1000000];
deque<int> maxn,minn;
int n,k;

int main(){
    cin>>n>>k;
    for (int i = 0; i < n; i++) cin>>a[i];

  //  cout<<k<<endl;

    for(int i=0;i<n;i++){
        if(!minn.empty() && i-minn.front()>=k) minn.pop_front();
        while(!minn.empty() && a[i]<=a[minn.back()])  minn.pop_back();
        minn.push_back(i);
        if(i>=k-1) cout<<a[minn.front()]<<' ';
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        if(!maxn.empty()&&i-maxn.front()>=k) maxn.pop_front();
        while(!maxn.empty() && a[i]>=a[maxn.back()]) maxn.pop_back();
         maxn.push_back(i);
     //   cout<<a[maxn.front()]<<' ';
    // cout<<i<<' ';
        if(i>=k-1 ) cout<<a[maxn.front()]<<' ';
    }















}
