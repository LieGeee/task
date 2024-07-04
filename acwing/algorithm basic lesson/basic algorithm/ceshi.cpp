#include <bits/stdc++.h>

using namespace std;
int k[10]={1,2,3,4,5,6,7,8,9};
int fd(int x){
    int l=0, r=10;
    while(l+1<r){
        int mid=(l+r)>>1;
        if(k[mid]>=x) r=mid;
        else l=mid+1;
        cout<<x<<" "<<l<<" "<<r<<" "<<k[mid]<<endl;
    }

    return l+1;
}
int main()
{
    cout<<fd(6);
}