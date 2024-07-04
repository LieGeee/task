#include <bits/stdc++.h>

using namespace std;
int a[100100];
int main()
{
    int n;
    cin>>n;
    deque<int> s;
    stack<int> q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.push_front(a[i]);
        q.push(a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        s.pop_back();
        s.push_front(a[i]);
        q.pop();
        ans++;
        for(int it=s.begin();it!=s.end();it++){

        }

    }
}