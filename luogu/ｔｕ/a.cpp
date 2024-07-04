#include<bits/stdc++.h>

using namespace std;

struct Node{
    int num;
    int t;
    int ms[105];
};
int qw;
Node a[10010];
int main(){

    int n;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>a[i].num>>a[i].t;
        cin>>qw;
        int j=0;
        while(qw!=0){
            a[i].ms[j]=qw;
            cin>>qw;
            j++;
        }

    }
    int maxs=0;
    for(int i=0;i<n;i++){
      //  for(int j=0;a[i].ms[j]!=0;j++) cout<<a[i].ms[j]<<' ';
      //  cout<<endl;
        for(int j=0;a[i].ms[j]!=0;j++) maxs=max(a[a[i].ms[j]-1].t,maxs);
        a[i].t=a[i].t+maxs;
        cout<<a[i].num<<' '<<a[i].t<<endl;
        maxs=0;
    }

    for(int i=0;i<n;i++) maxs=max(a[i].t,maxs);
    cout<<maxs;
}