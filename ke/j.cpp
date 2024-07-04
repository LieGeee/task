#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,t;
int sa[101000],sb[101000];
int ba,bb,bc;
signed main(){
    string a,b;
    cin>>a>>b;
    a=' '+a;b=' '+b;
    a[0]=0;b[0]=0;
    for(int i=1;i<a.length();i++){
     //   cout<<a[i]<<' ';
        if(a[i]=='X')   sa[i]=2;
        else sa[i]=4000000;
        sa[i]=sa[i-1]+sa[i];

    }
  // for(int i=1;i<a.length();i++) cout<<sa[i]<<' ';
  // cout<<endl;
    for(int i=1;i<b.length();i++){
        if(b[i]=='X')   sb[i]=2;
        else sb[i]=4000000;
        sb[i]=sb[i-1]+sb[i];
    }
  //  for(int i=1;i<b.length();i++) cout<<sb[i]<<' ';
  //  cout<<endl;
    cin>>t;
    while(t--){
        int la,ra,lb,rb;
        cin>>la>>ra>>lb>>rb;

        if(sa[ra]-sa[la-1]>=4000000) {ba=1;}
        if(sb[rb]-sb[lb-1]>=4000000) {bb=1;}
        int k1=(sa[ra]-sa[la-1]);
        int k2=(sb[rb]-sb[lb-1]);
        if(k1==k2) bc=1;
        k1%=4;k2%=4;
      //  cout<<k1<<' '<<k2<<endl;
        if(ba==bb){
            if(  k1==k2 ) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if( bc==1 ) cout<<"YES"<<endl;
            cout<<"NO"<<endl;
        }
        ba=0,bb=0,bc=0;
    }
}
