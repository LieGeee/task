#include <iostream>
#include <queue>

using namespace std;
int n;
struct Node{
    int a;
    int b;
    int c;
    int e;
}k[10000];
const int N=1e6;
int z;

queue<Node> s;


Node newk1;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k[i].a>>k[i].b;
    }
    for(int i=0;i<n;i++) {

        while(newk1.e<10e7){
            s.push(k[i]);
            Node newk=s.front();
            s.pop();

            newk1.a=newk.a+1,newk1.c=3;newk1.e++;
            if(newk1.c==3) s.push(newk1);
            else continue;

            newk1.a=newk.a-1,newk1.c=2;newk1.e++;
            if(newk1.c==2) s.push(newk1);
            else continue;

            newk1.a=newk.a*2;s.push(newk1);newk1.e++;

            if( newk1.a==newk1.b)
            {
                cout<<newk1.e<<' ';
                break;
            }
        }
    }
}
