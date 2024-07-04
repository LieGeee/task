#include<bits/stdc++.h>

using namespace std;
int a[1000];
int qs(int l,int r){
    if(l==r) return 0;
    int mid=a[l+r>>1];
    int i=l-1,j=r+1;
    i++,j--;
    while(i<j){
         while (a[i] < mid) i++;
         while (a[j] > mid) j--;

        if (i < j) swap(a[i], a[j]);
    }
    qs(0,j);
    qs(j+1,r);

}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    int l,r=n;
    qs(0,r-1);
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
}

