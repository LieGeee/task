#include<iostream>
using namespace std;
int dp[110][110], num[110][110];
int n, m;
int dps(int i, int j)
{
    int up=1, down=1, left=1, right = 1;
    if (dp[i][j] != 1)return dp[i][j];
    else
    {
        if (i - 1 >= 0 && num[i - 1][j] < num[i][j])
            up = max(dp[i][j], dps(i - 1,j) + 1);
        if (i + 1 < n && num[i + 1][j] < num[i][j])
            down = max(dp[i][j], dps(i + 1,j) + 1);
        if (j - 1 >= 0 && num[i][j - 1] < num[i][j])
            left = max(dp[i][j], dps(i,j-1) + 1);
        if(j+1<m&&num[i][j+1] < num[i][j])
            right=max(dp[i][j], dps(i,j +1) + 1);
        return dp[i][j] = max(dp[i][j],max(max(up, down), max(left, right)));
    }
}
int main()
{
    int maxi = -1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> num[i][j];
            dp[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dps(i, j);
            maxi = max(maxi, dp[i][j]);
            //	cout << dp[i][j]<<" ";
        }
        //	cout << endl;
    }
    cout << maxi;
}