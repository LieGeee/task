#include<iostream>
using namespace std;
int arr[110];
int n,m, k;
int t, ci;
bool check()
{
    int ww = 1;
    for (int i = 1; i <=n;i++)
    {
        if (arr[i] != arr[i + 1])
            ww++;
        if (ww > k) return 0;
    }
    if (ww == k)
        return 1;
    else return 0;
}
int main()
{
    cin >> t;
    for(int w=0;w<t;w++)
    {

        cin >> n >> m >> k;
        for (int i = m; i >= 0; i--)
        {
            arr[n+1] = i;
            for (int j = n; j > 0; j--)
            {
                arr[j] = arr[j + 1] % j;
            }
            if (check())ci++;

        }
        cout << ci << endl;
        ci = 0;
    }
}