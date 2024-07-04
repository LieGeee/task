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
//    for(i=0;i<=r;i++ ) cout<<c[i];
//    cout<<endl;
    for( i=l,k=0;i<=r;i++,k++)  b[i]=c[k];
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)    cin>>b[i];
    guibing(0,n-1);
    for(int i=0;i<n;i++)  cout<<b[i]<<' ';
}



//最后,回归原本位置的时候,是i=l,确定范围
//为什么不直接使用l 与r :后面要用