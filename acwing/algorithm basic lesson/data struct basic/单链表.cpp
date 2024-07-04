#include <bits/stdc++.h>

using namespace std;

int n,m;
int a[100000],b[10000];
int pos=-1,posh,posf,posr;
int main()
{
    int k,x;
    cin>>n;
    while(n--){
        char q=getchar();
        if(q=='H'){
            cin>>x;
            a[++pos]=x;
            b[pos]=posh;
            posh=pos;
        }
        if(q=='D'){
            cin>>k;
            int find=posh;

            if(k==0){
                posh=b[posh];
                continue;
            }

            while(k--) {
                find=b[find];
                if(k==2) posf=find;
            }
            b[posf]=b[find];
        }
        if(q=='I'){
            cin>>k>>x;
            int find=posh;

            while(k--) {
                find=b[find];
                if(k==1) posf=find;
            }
            a[pos++]=x;
            b[pos]=b[find];
            b[posf]=b[pos];
        }
    }

    for(int i=posf;a[i]!=0;i=b[i]){
        cout<<a[i]<<' ';
    }

}