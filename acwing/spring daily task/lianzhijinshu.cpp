#include <bits/stdc++.h>

using namespace std;
struct Node{
  int  a;
  int  b;
}k[1000];
int cmp(Node a,Node b)
{
    return a.a<b.a;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k[i].a>>k[i].b;
    }
    sort(k,k+n,cmp);
    int ansmin,ansmax,cnt;
    for(int i=1;i<k[0].a;i++)
    {

       for(int j=0;j<n;j++)
       {
           if(k[j].a/i==k[j].b) cnt++;
       }
        if(cnt==n)
        {
            ansmin=i;
            break;
        }
        cnt=0;
    }
    cnt=0;
    for(int i=k[0].a;i>0;i--)
    {

        for(int j=0;j<n;j++)
        {
            if(k[j].a/i==k[j].b) cnt++;
         //   cout<<k[j].a<<' '<<i<<' '<<cnt<<endl;
        }
        //cout<<endl;
        if(cnt==n)
        {
            ansmax=i;
            break;
        }
        cnt=0;
    }
    cout<<ansmin<<' '<<ansmax;

}