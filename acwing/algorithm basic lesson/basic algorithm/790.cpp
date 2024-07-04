#include<bits/stdc++.h>

using namespace std;

void check(double q)
{
    double l=-100000,r=100000,mid=l;

    while((q-mid*mid*mid)>1e-8) {
         mid = (l + r) / 2;
        if (q > mid*mid*mid) l = mid;
        else r = mid;
       // printf("%.8lf\n",mid);
    }
    printf("%.6lf",l);
}

int main(){
    double n;
    cin>>n;

    check(n);
}