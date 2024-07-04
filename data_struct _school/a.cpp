#include <bits/stdc++.h>


using namespace std;


int f(int a){
    if(a == 0) return 1;
    if(a == 1 )
    return f(a-1)+ f(a-2);

}


int main(){

    int a;
        cin>>a;
    cout<<f(a);

}