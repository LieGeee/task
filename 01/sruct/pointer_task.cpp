#include<bits/stdc++.h>

using namespace std;

void chuan(int* p){
    int  *k=p;
    int b=7;
    *k=b;
    cout<<*k<<' '<<k<<endl;
}

void chuan_2(int* *p){
    int* *k=p;
    int b=8;
    **k=b;
    cout<<*(*k)<<endl;
}
void chuan_3(int *p){
    *p=3;
}

int main()
{
    int a=5;
    int *p=&a;
    cout<<p<<endl;
    chuan(p);
    cout<<*p<<endl<<endl;

    chuan_2(&p);
    cout<<*p<<endl;

    chuan_3(p);
    cout<<*p<<endl;
}