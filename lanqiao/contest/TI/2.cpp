#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i=0;i<3600*24;i++)
    {
        if(6*i%360 == 0.2*(i%360) && i%360!=0) cout<<i<<' ';
        if(6*i%360 == 0.3*(i%360) && i%360!=0) cout<<i<<endl;

    }
}