#include<bits/stdc++.h>

using namespace std;
int a[100000];
int n,m,pos;
int main(){
    cin>>n>>m;

    for(int i=1;a[i-1]<=m;i++){
        a[i]=a[i-1]+i;
       // cout<<a[i]<<' '<<a[i-1]<<' '<<i<<endl;
       pos=i;
    }
    int i=0,q=0;
    while(m>0){

        int k=pos-i+1;
       // cout<<m<<' '<<a[pos-i]<<endl;
        if(m>=a[pos-i]) {
            n-=k;
            while (k--) printf("%c",'a'+q);
            q++;
            m-=a[pos-i];
        }
        else
            i++;
    }
    int j=0;
    i=0;
    while(n--){
        if('z'-j-i>='a') {
            printf("%c", 'z' - j-i);
            j++;
        }
        else {
            i++;
            j = 0;
            n++;
        }
    }

}
