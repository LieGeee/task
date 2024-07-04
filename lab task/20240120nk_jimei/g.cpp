#include <bits/stdc++.h>

using namespace std;

long long a[1000000];

int main(){
    int n,w,wei,cha;
    cin>>n;
    while(n--){
        cin>>w;
        switch (w) {
            case 1: {
                cin>>cha;
                a[wei]=cha;
                wei++;
                break;
            }
            case 2:{
                int min=1000000000,min_wei;
                for(int i=0;i<wei;i++){
                    if(min>a[i] && a[i]>0){
                        min=a[i];
                        min_wei=i;
                    }
                }
                cout<<a[min_wei]<<endl;
                a[min_wei]=-10000000000;
                break;
            }
            case 3:{
                int shu;
                cin>>shu;
                for(int i=0;i<wei;i++){
                    a[i]+=shu;
                }
                break;
            }

        }

    }

}