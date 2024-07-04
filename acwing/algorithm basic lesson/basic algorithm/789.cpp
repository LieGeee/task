#include <bits/stdc++.h>

using namespace std;
int a[100000];
int n,m,q;
int checkr(int q) {
    int l = 0, r = n;
    while (l + 1  < r) {
        int mid = l + r >> 1;
        if (a[mid] <= q) l = mid;
        else r = mid;
    }
    return l+1;
}
int checkf(int q){
    int l=-1,r=n;
    while (l+1 <  r) {
        int mid = l + r  >> 1;
        if (a[mid] < q) l = mid;
        else r = mid;
        cout<<l<<' '<<r<<endl;
    }

    return l;
}
int main()
{

    cin>>n>>m;
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    while(m--) {
        cin >> q;
//        if(a[checkf(q)+1] != q ) cout<<-1<<' '<<-1<<endl;
//        else
        cout<<checkf(q)+1<<' '<<checkr(q)-1 <<endl;
    }
}


//一直是数组越界了
//这样写虽然能过,但是数组会越界,肯定会让第一个数查询有问题