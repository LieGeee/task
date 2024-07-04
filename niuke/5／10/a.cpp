#include<bits/stdc++.h>

using namespace std;
int num;

int check(int x){
    if(x%7 == 0) return false;
    while(x){
        int wei=x%10;
        if(wei == 7) return false;
        x/=10;
    }
    return true;
}

int main(){
    int t;
    int n,a,k;
    cin>>t;
    while(t--){
    cin>>n>>a>>k;
        num=a+1;
        for(int i=0;i<k;i++){
        num+=n;
        check(num)?cout<<num<<' ':cout<<'P'<<' ';

        }
    cout<<endl;
    }
}