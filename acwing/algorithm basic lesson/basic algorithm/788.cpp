#include <bits/stdc++.h>
using namespace std;

int a[100000],c[100000],cnt;
void guibing(int l,int r)
{
    if(l>=r ) return;
    int mid = l + r>> 1;

    guibing(l,mid);guibing(mid+1,r);

    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r) {
        if(a[i]<=a[j]) {
            c[k++]=a[i++];
        }else {
            c[k++] = a[j++];
            cnt+=mid-i+1;
        }
    }

    while(i<=mid) c[k++]=a[i++];
    while(j<=r) c[k++] = a[j++];

    for(i=l,j=0;i<=r;i++,j++) a[i]=c[j];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    guibing(0,n-1);
   cout<<cnt;

   //在每次合并区间,mid是上次分分区间的左区间的右端点,合并时,自然要选择mid作为计数器右边界.
}

