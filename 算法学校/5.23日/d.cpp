#include <bits/stdc++.h>

using namespace std;

int q(int a,int b){
    if(!a) {
        cout<<b;
        return 0;
    }
    if(!b) {
        cout<<a;
        return 0;
    }
    int t;
    t=a%b;
    a=b;
    b=t;
    q(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    q(a,b);
}