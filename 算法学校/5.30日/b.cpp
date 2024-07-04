#include <bits/stdc++.h>

using namespace std;
int n,b[100000],c[100000];

void guibing(int l,int r){
    if(l>=r) return ;
    int mid = l + r >>1;

    guibing(l,mid);guibing(mid+1,r);

    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r){
        if(b[i]<b[j]) c[k++] = b[i++];
        else c[k++]=b[j++];
    }
    while(i<=mid) c[k++]=b[i++];
    while(j<=r) c[k++]=b[j++];

    for( i=l,k=0;i<=r;i++,k++)  b[i]=c[k];
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)    cin>>b[i];
    guibing(0,n-1);
    for(int i=0;i<n;i++)  cout<<b[i]<<' ';
}