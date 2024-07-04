#include <bits/stdc++.h>

using namespace std;

int built[210];
int choose[210];
struct Node{
    int floor;
    int cnt;
};
queue<Node> s;
int main()
{
    int n,start,end,ans=200000;
    cin>>n>>start>>end;
    for(int i=1;i<=n;i++){
        cin>>built[i];
    }
    memset(choose,-1,sizeof(choose));
//    for(int j=1;j<=n;j++)
//        cout<<choose[j]<<' ';
//    cout<<endl;
    Node a ={start,0};
    s.push(a);
    while(!s.empty()){
        Node newk=s.front();
        Node newk2;
        if(newk.floor==end)
        {
           cout<<choose[end]+1;
           return 0;
        }
//         cout<<newk.floor<<endl;
            if(newk.floor+built[newk.floor]>0 && newk.floor+built[newk.floor]<=n && choose[newk.floor+built[newk.floor]]==-1){
                newk2.floor=newk.floor+built[newk.floor];
                newk2.cnt++;
                choose[newk2.floor]=choose[newk.floor]+1;
                s.push(newk2);

//                cout<<newk2.floor<<endl;
//                for(int j=1;j<=n;j++)
//                    cout<<choose[j]<<' ';
//               cout<<endl;
            }
            if(newk.floor-built[newk.floor]>0 && newk.floor-built[newk.floor]<=n  && choose[newk.floor-built[newk.floor]]==-1 ){
                newk2.floor=newk.floor-built[newk.floor];
                newk2.cnt++;
                choose[newk2.floor]=choose[newk.floor]+1;
                s.push(newk2);
            }

        s.pop();
    }
    if(choose[end]==-1)
    {
        cout<<-1;
        return 0;
    }
}