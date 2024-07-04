#include <bits/stdc++.h>

using namespace std;

 struct Node{
    int shu;
    int xv;
}w[10000];


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>w[i].shu;
        w[i].xv=i;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            if(w[j].shu>w[j+1].shu){
                swap(w[j],w[j+1]);
            }
            puts("shu:");
            for(int q=1;q<=n;q++) cout<<w[q].shu<<' ';
            cout<<endl;
            puts("xv:");
            for(int k=1;k<=n;k++) cout<<w[k].xv<<' ';
            cout<<endl;
        }

    }

    for(int i=1;i<=n;i++){
        cout<<w[i].shu;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<w[i].xv;
    }

}