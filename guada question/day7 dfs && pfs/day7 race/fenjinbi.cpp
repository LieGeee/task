#include <iostream>
#include <algorithm>

using namespace std;
int n,m,k,cnt;
const int N=1e6;

struct Node{
    int a;
    int b;
    double c;
}a[100000];
bool cmp(struct Node q,struct Node w){
    return q.c>w.c;
}
double ans;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].a>>a[i].b;
        a[i].c=(double)a[i].b/a[i].a;
    }
    sort(a,a+n,cmp);
    cout<<endl;

    while(cnt<m ){
        for(int i=0;i<a[k].a;i++)
        {
             ans+=a[k].c;
             cnt++;
             if(cnt >= m ) break;
        }
        cout<<' '<<ans<<endl;
        k++;
    }
    printf("%.2lf",ans);

}

