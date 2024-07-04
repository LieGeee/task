#include <bits/stdc++.h>

using namespace std;

int check(int x){
    for(int i=2;i<x/i;i++){
        if(x%i == 0) return false;
    }
    return x;
}

int main(){

    for(int i=2;i<9999;i++){
        if(check(i)) cout<<check(i)<<endl;
    }
}