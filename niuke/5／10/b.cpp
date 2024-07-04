#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]) swap(a[i],b[i]);
    }
    string c(n*n*n, '0');
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int shu=0,yuan=0,jin=0;

             shu=(a[i]-'0')*(b[i]-'0');
             yuan=shu%10;
             jin=shu/10;
             if(c[i+j]-'0'+yuan >10) {
                 c[i+j]=(yuan+c[i+j]-10);
                 c[i+j+1]+=1;
                 if(c[i+j+1]>10 )

                     
             }
             else{
                 c[i+j]=(yuan+c[i+j]);
             }

            c[i+j+1]+=(jin);

            cout<<c[i+j]<<c[i+j+1];
        }
    }

    cout<<c;


    //cout<<qq*ww;

}