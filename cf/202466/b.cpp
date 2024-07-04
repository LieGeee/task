#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main(void)
{
    int x, a[105], tong[105];
    cin >> x;
    while (x--) {
        int n, f, k, favdata;
        int l = 1, r = 0;
        bool fff = false;
        memset(tong, 0, sizeof(tong));
        memset(a, 0, sizeof(a));//清空数据数组
        cin >> n >> f >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            tong[a[i]]++;
        }
        favdata = a[f];
        if (tong[favdata] > 1) {//判断喜欢的数是否有多个
            fff = true;
        }
        sort(a + 1, a + 1 + n, cmp);//从大到小排序

        for (int i = n; i > favdata; i--) {
            l += tong[i];
        }
        r = l + tong[favdata]-1;
        //cout << l << ' ' << r << endl;
        //for(int i=1;i<=n;i++) cout << a[i];
        if (l <= k && r > k && fff) {
            cout << "MAYBE" << endl;
        }
        else if (a[k] <= favdata) {
            cout << a[k] << ' ' << favdata << endl;
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}