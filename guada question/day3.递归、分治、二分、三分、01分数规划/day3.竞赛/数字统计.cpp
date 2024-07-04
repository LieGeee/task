#include<iostream>
#include<string>
using namespace std;

string x;
int k,ans;

int main()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++) {
        x = to_string(i);
        for (int j = 0; j < x.size(); j++) {
            if (x[j] == '2') ans++;

        }
    }
    cout<<ans;
}
