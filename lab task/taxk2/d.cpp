#include<bits/stdc++.h>

using namespace std;
double q,a,z;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cin>>q>>a>>z;
        cout<<fixed<<setprecision(2)<<(a*z/(q-a))<<endl;
    }
}