#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    for(int i=9;i>-1;i--){
        for(int j=9;j>-1;j--){
            for(int k=9;k>-1;k--){
                if(i<k && i>j && i+j+k == i*j*k)
                    cout<<i<<j<<k<<endl;
            }
        }
    }
}