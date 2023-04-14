#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "KIIT";
    string b = "KISS";
    int row = a.size();
    int col = b.size();
    int dp[row + 1][col + 1];
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            cout << dp[i][j] << " ";
        }

        cout << endl;
    }
    cout << "max length of lcs: " << dp[row][col];
}