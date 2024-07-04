#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int q,w,e;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q>>w>>e;
        if(q<w &&w<e) cout<<"STAIR"<<endl;
        else if(q<w &&w>e) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
}