#include <bits/stdc++.h>

using namespace std;
const int daxiao=6;
typedef struct Node{
    int a[daxiao];
    int num;
}st;

st* Init(){
    st* k= new st;
    k->num=-1;
    return k;
}
void ruzhan(st* s) {
    int e;
    while (cin >> e && e != -1) {

        if (s->num + 1 == daxiao){
            puts(" man le");
            return;
        }

        else {
            //cout<<s->num;
            s->a[++s->num] = e;
        }
    }
}
int chuzhan(st* s){
    int e;
    if(s->num>=0)  e=s->a[s->num -- ];
    else {
        puts("qia yue jie, wu shu chu");
        return 0;
    }
        return e;
}


int main(){
    st* s=Init();
    ruzhan(s);
    for(int i=0;i<6;i++)    cout<<chuzhan(s)<<' ';
}