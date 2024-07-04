#include<bits/stdc++.h>

using namespace std;
int m,n;
int a[1000][1000];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

struct Node{
    int a;
    int b;
};
queue<Node> s;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
    }
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
Node k={0,0};
s.push(k);
while(!s.empty()){
Node newk=s.front();
s.pop;
Node newk1;
for(int i=0;i<4;i++){
newk1.a=newk.a+dx[i];
newk1.b=newk.b+dy[i];

}
}


}