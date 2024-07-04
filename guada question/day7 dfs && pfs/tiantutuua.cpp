    #include <iostream>
    #include <queue>
    #include <cstring>
    const int N=50;
    using namespace std;
    int a[N][N];
    int dx[]={0,-1,1,0};
    int dy[]={-1,0,0,1};
    int n;
    struct Node{
        int a;
        int b;
    };
    queue<Node> s;
    void bfs(struct Node k)
    {
        while (!s.empty()) {
            Node newk = s.front();
    //        cout<<endl<<newk.a<<" "<<newk.b<<endl;
            s.pop();
            Node newk1;
            for(int i=0;i<4;i++)
            {
                newk1.a=dx[i]+newk.a; newk1.b=dy[i]+newk.b;
                if(newk1.a>=0 && newk1.a<=n+1 && newk1.b>=0 && newk1.b<=n+1 && a[newk1.a][newk1.b]==-1)
                {
                    a[newk1.a][newk1.b]=0;

                    s.push(newk1);

                }
            }
        }
    }
    int main() {
        cin >> n;
        memset(a,-1,sizeof(a));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if(a[i][j]==0) a[i][j]=-1;
            }

        Node fir = {0, 0};
        s.push(fir);
        bfs(fir);



        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++)
                if(a[i][j]==-1) cout<<"2 ";
                else cout << a[i][j] << ' ';
            cout<<endl;
            }



    }