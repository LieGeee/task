#include <iostream>
using namespace std;
int main()
{
    long long n, h, f, s;
    cin >> n;
    s = n % 60;
    f = n / 60 % 60;
    h = n / 3600 % 24;
    printf("%02d:%02d:%02d", h, f, s);
    return 0;
}
