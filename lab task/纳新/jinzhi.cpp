#include <iostream>
using namespace std;
typedef long long ll;

int main(void) {
    ll a, ans, i = 0;
    int num[20];
    cin>>a;
    while(a){
        num[++i]=a%9;
        a/=9;
    }
    for(;i>0;i--){
        cout<<num[i];
    }
    return 0;
}
