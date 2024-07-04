
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int a;
    int b;
}q[100000];
int cmp(Node a,Node b)
{
    return a.a<b.a;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>q[i].a>>q[i].b;

    sort(q,q + n,cmp);

    int i=0,j=0,ans=0;

    loop:
    j++;

    if(q[i].b>=q[j].a){
        q[i].b=max(q[j].b,q[i].b);
        if(j>=n) goto end;
        else  goto loop;
    }
    else{
        if(j>=n) goto end;
        ans++;
        i=j;
        goto loop;
    }
    end:
    cout<<ans+1;
}