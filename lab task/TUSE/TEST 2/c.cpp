#include <iostream>

using namespace std;
int d,h;
int main()
{
    int a;

    cin>>a;
    while(a>=3600)
    {
        a-=3600;
        d++;
    }
    while(a>=60)
    {
        a-=60;
        h++;
    }
    cout<<d<<' '<<h<<' '<<a;
}