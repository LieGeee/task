#include <bits/stdc++.h>

using namespace std;

const int N= 1000010;

int primes[N], cnt;
bool st[N];

void primes1(int n)
{
    for (int i = 2; i <= n; i ++ )
    {
        if (st[i]) continue;
        cnt ++ ;
        for (int j = i + i; j <= n; j += i)
            st[j] = true;
    }
}
int main()
{
    int n;
    cin >> n;
    primes1(n);
    cout << cnt << endl;
    return 0;
}
