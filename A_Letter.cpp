#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n, m;
    cin >> n >> m;

    char matrix[n][m];

    int xStart = 100, yStart = 100, xEnd = -1, yEnd = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];

            if (matrix[i][j] == '*')
            {

                xStart = min(xStart, i);
                yStart = min(yStart, j);

                xEnd = max(xEnd, i);
                yEnd = max(yEnd, j);
            }
        }
    }

    for (int i = xStart; i <= xEnd; i++)
    {
        for (int j = yStart; j <= yEnd; j++)
        {
            cout << matrix[i][j];
        }
        cout <<endl;
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
         solve();
    return 0;
}