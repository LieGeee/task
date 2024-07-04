#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long x;
    cin >> x;
    for (long long lucky = x - 1; ; lucky--)
    {
        long long tmp = lucky, sum = 0;
        while (tmp)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (lucky + sum == x)
        {
            cout << lucky << endl;
            break;
        }
    }

}