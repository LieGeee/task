#include <iostream>

using namespace std;
typedef long long ll;
ll a,b,c;

int f[25][25][25];

ll w(ll a,ll b,ll c)
{
    if(a<=0 || b<=0 || c<= 0) return 1;
    else if (a > 20 || b > 20 || c > 20)  return w(20, 20, 20);
    else if (w(a,b,c)!=0) return  f[a][b][c];
    else if(a<b && b<c ) f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    else f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c-1)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    return f[a][b][c];
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while(cin>>a>>b>>c) {
        if(a ==-1 && b==-1 && c==-1) return 0;
        w(a,b,c);
        printf("w(%lld,%lld,%lld)=%d\n",a,b,c,f[a][b][b]);
    }
}
