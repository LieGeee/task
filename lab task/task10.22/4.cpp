#include <bits/stdc++.h>

using namespace std;
int a[1000][1000];
int dx[5]={0,1,0,-1};
int dy[5]={1,0,-1,0};
struct Node{
    int x;
    int y;
};
char b[1000][1000];
int main()
{

    int n,m;
    cin>>n>>m;
    getchar();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin >> b[i][j];

            if(b[i][j]=='.') a[i][j] = 0;

            else a[i][j]=-1;
        }
    }
//    for(int ww=0;ww<n;ww++) {
//        for (int j = 0; j < m; j++) {
//            cout << a[ww][j] << ' ';
//        }
//        cout<<endl;
//    }
    queue<Node> s;
    Node k={0,0};
    s.push(k);
    while (!s.empty())
    {
        Node newk=s.front();
        s.pop();
        Node newk1;
        for(int i=0;i<4;i++)
        {
            if(newk.x+dx[i]==n-1 && newk.y+dy[i]==m-1)
            {
                cout<<"Yes";
                return 0;
            }
            if(a[newk.x+dx[i]][newk.y+dy[i]]==0 &&newk.x+dx[i]>=0 &&newk.x+dx[i] < n &&newk.y+dy[i]>=0 && newk.y+dy[i] < m )
            {
                newk1.x=newk.x+dx[i];
                newk1.y=newk.y+dy[i];
                s.push(newk1);
                a[newk1.x][newk1.y]=1;

//                for(int ww=0;ww<n;ww++) {
//                    for (int j = 0; j < m; j++) {
//                        cout << a[ww][j] << ' ';
//                    }
//                    cout<<endl;
//                }
//                cout<<endl;
            }


        }
    }
    cout<<"No";
}