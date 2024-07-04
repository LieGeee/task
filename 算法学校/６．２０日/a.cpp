#include <bits/stdc++.h>

using namespace std;

int w[1000],ans;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>w[i];
    sort(w,w+n);

    int i=-1,j=n;
    while(i>j){
        if(w[i]+w[j]>=300){
            j--;
        }
        else{
            i++,j--;
            ans+=1;
        }

    }
    cout<<ans;

}