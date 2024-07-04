#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
using namespace std;
const int N=2e5 + 10;
int t, sum, n, s, x, a[N], su[N]; 
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> t;
	while(t --)
	{
		int ans = 0x3f3f3f;
		sum = 0;
		cin >> n >> s;
		memset(su, 0, sizeof su);
		for(int i = 1; i <= n; i ++)
		{
			cin >> a[i];
		}
		for(int i = 1; i <= n; i ++)
		{
			su[i] = su[i - 1] + a[i];
		}
		for(int i = 0, j = 1; i <= n; i ++)
		{
			while((su[j] - su[i] < s) && j <= n)j ++;
			if(su[j] - su[i] >= s)ans = min(ans, j - i);
			j = i;
		}
		cout << ans << '\n';
	}
	return 0;
}
