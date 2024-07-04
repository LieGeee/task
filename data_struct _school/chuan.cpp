#include <bits/stdc++.h>

using namespace std;

char a[1000];
char b[1000];
int cnt_a,cnt_b;
int my_strcmp(char *b,char *a){
    char *k=b;
    int pos=0;


    for(int i=0;i<cnt_a; i++,pos++){
      //  cout<<*a<<' '<<*b<<' '<<i-pos<<' '<<pos<<' '<<cnt_b;
      // cout<<endl;
        if((*a) == (*b)) {

            a++;
            b++;
            if(pos+1 == cnt_b) return i-pos+1;
        }
        else {
            k++;
            b=k;
            pos=0;
        }
    }
    return -1;
}

int main(){


    while(cin>>a[cnt_a] && a[cnt_a]!='@')
    {
        cnt_a++;
    }
    a[cnt_a]='\0';
    while(cin>>b[cnt_b] && b[cnt_b]!='@')
    {
        cnt_b++;
    }
    b[cnt_b]='\0';

//    for(int i=0;i< cnt_a;i++){
//        cout<<a[i];
//    }
//    cout<<endl;
//    for(int i=0;i< cnt_b;i++){
//        cout<<b[i];
//    }
//    cout<<cnt_a<<cnt_b;
    my_strcmp(a,b)==-1?cout<<"no answer":cout<<"a去啊我都是er is"<<' '<<my_strcmp(a,b);
}