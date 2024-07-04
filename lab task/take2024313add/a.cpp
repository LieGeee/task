#include <bits/stdc++.h>

using namespace std;
int n,m;
string a,b;
int main()
{
    cin>>n>>m>>a;
    a='0'+a;
    int p=a.find('I');
    int j=p+1,i=p-1;
    while(m--){
        cin>>b;
//        cout<<a[i];
        if(b[0]== 'b' ) {
            if (i != 0) {

                if (a[i]=='('&&a[j] == ')') a[j] = '0', j++;
                a[i] = '0';
                i--;5896

                .+n````
                9
            }
        }
        else{
            if(j<=n) a[j]='0',j++;
        }


    }
    for(int qw=0;qw<=n;qw++)
        if(a[qw]!='0') cout<<a[qw];

}