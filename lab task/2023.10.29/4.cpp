#include <bits/stdc++.h>
int a[10000],arr[1000000],cnt[100000];
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    long long ans = 0;
    for (int i = 0; i < maxm; i++)
    {
        if (cnt[i])
        {
            ans += (cnt[i] / (i + 1)) * (i + 1);
            if (cnt[i] % (i + 1) != 0)
            {
                ans += i + 1;
            }
        }
    }
    cout << ans << endl;
}