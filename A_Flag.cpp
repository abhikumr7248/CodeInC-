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
    int n, m, pr = 0;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (j > 0 && a[i][j] != a[i][j - 1])
                pr++;
        }
    }
    int as=0;
    if (pr > 0)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i][0] == a[i + 1][0])
            {
                cout << "NO";
                as=1;
                break;
            }
        }
        if(as==0)
        cout << "YES";
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        solve();
    return 0;
}