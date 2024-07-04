#include <bits/stdc++.h>

using namespace std;
   int b[10];
int main(){
    int t,n,m;
    cin>>t;
    string a;
    while(t--){
        int ans=0;
        cin>>n>>m;
        cin>>a;
        for(int i=0;i<a.length();i++){
           // cout<<a[i]<<' ';
            switch (a[i]) {

                case 'A': b[0]++;break;
                case 'B': b[1]++;break;;
                case 'C': b[2]++;break;;
                case 'D': b[3]++;break;;
                case 'E': b[4]++;break;;
                case 'F': b[5]++;break;;
                case 'G': b[6]++;break;;
            }
        }
//        for(int i=0;i<7;i++){
//            cout<<b[i]<<' ';
//        }
//        cout<<endl;
        for(int i=0;i<7;i++){
            if(m>b[i]) ans+=(m-b[i]);
        }
        cout<<ans<<endl;
        memset(b,0,sizeof b);
    }

}