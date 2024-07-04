#include <bits/stdc++.h>

using namespace std;
int cost;
struct Node
{
    int a;
    int b;
}h[100000];
bool cmp(Node qw,Node wq)
{
    return qw.b<wq.b;
}
int main()
{
    int zu;
    cin>>zu;
    for(int j=0;j<zu;j++) {
        int n, m;
        cin >> n >> m;
        int people=n;
        for (int i = 0; i < n; i++) cin >> h[i].a;
        for (int i = 0; i < n; i++) cin >> h[i].b;
        sort(h, h + n, cmp);
        for (int i = 0; i < n; i++) cout << h[i].a<<' ';cout<<endl;
        for (int i = 0; i < n; i++) cout << h[i].b<<' ';cout<<endl;
        cost+=m;
        people-=1;
        for(int i=0;i<=n;i++){
            while(h[i].a>0) {
                if (h[i].b < m) {

                    cost += h[i].b;
                    h[i].a--;
                    people-=1;
                    cout<<h[i].b<<' '<<cost<<' '<<h[i].a<<"     ";
                }
                if(people == 0)
                    goto loop;
            }
        }
        cout<<endl;
        loop:
        while(people>0)
        {
            cost+=m;
            people-=1;
        }

        cout<<cost<<endl;
        cost=0;
    }
}