#include <bits/stdc++.h>

using namespace std;
int main(){
    double q,w,e,r,t,y,u,i;
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&q,&w,&e,&r,&t,&y,&u,&i);
    cout<<1-(1-q/w)*(1-e/r)*(1-t/y)*(1-u/i);
}