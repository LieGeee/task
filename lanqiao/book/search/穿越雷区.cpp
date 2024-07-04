#include <bits/stdc++.h>
using namespace std;

const int N=110;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
char a[110][110];int b[110][110];
typedef struct{
  int row,col;
  char shang;
}q;
queue<q> k;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
            if (a[i][j] == 'A')     {b[i][j]=1;a[i][j]=8,k.push(q{i,j});}
            if (a[i][j] == '-')     a[i][j]=0;
            if (a[i][j] == '+')     a[i][j]=1;
            if (a[i][j] == 'B')     a[i][j]='B';
        }
    }
    while (!k.empty()) {
        q nk1 = k.front();
      //  cout<<nk1.row<<' '<<nk1.col<<endl;
        k.pop();
        for(int i=0;i<4;i++){
            q nk2={nk1.row+dx[i],nk1.col+dy[i]};
           // cout<<nk2.row<<' '<<nk2.col<<endl;
            if(b[nk2.row][nk2.col]==0 && a[nk2.row][nk2.col]^a[nk1.row][nk1.col] && nk2.row>=0 && nk2.row<n && nk2.col>=0 && nk2.col<n){
                k.push(nk2);
                b[nk2.row][nk2.col]=b[nk1.row][nk1.col]+1;
               /* for(int q=0;q<n;q++){
                    for(int w=0;w<n;w++){
                        cout<<b[q][w]<<' ';
                    }
                    cout<<endl;
                }
                cout<<endl;*/
                if(a[nk2.row][nk2.col] == 'B') {
                    cout<<b[nk2.row][nk2.col]-1;
                    return 0;
                }
            }
        }
    }
}
/*
5
A + - + -
- + - - +
- + + + -
+ - + - +
B + - + -
*/