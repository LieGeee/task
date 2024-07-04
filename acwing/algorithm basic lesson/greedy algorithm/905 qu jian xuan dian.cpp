
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int a;
    int b;
}q[100000];
int cmp(Node a,Node b)
{
    return a.b<b.b;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>q[i].a>>q[i].b;

    sort(q,q + n,cmp);

    int i=0,j=1,ans=0;

    loop:
    if(q[i].b>=q[j].a){
        j++;
        if(j>=n) goto end;
        else  goto loop;
    }
    else{
        i=j;
        ans++;
        goto loop;
    }
    end:
    cout<<ans+1;
}