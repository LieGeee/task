#include <bits/stdc++.h>

using namespace std;
int ans,n,m;

int check(int q){
    for(int i=2;i*i<=q;i++){
        if(q%i == 0) return true;
    }
    return false;
}

int yun(int q){
    int cun=0,s=0,zhi=0;
    while(q>0){
    cun=q%10;
    q/=10;
    s+=cun;
    }
    if(s==23) return 1;
    else return 0;
}

int main(){
    for(int i=2;i<=1000000;i++)
        if(!check(i)) if(yun(i)) ans++,cout<<i<<endl;
    cout<<ans;
}