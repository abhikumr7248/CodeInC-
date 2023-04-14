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
    ll n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(5));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            char c;
            cin >> c;
            arr[i][j] = (c == '1');
        }
    }

    for (ll d1 = 0; d1 < 5; d1++)
    {
        for (ll d2 = d1 + 1; d2 < 5; d2++)
        {
            ll cnt1 = 0, cnt2 = 0, cnt3 = 0;

            for (ll i = 0; i < n; i++)
            {
                if (arr[i][d1] && !arr[i][d2])
                    cnt1++;

                else if (!arr[i][d1] && arr[i][d2])
                    cnt2++;

                else if (arr[i][d1] && arr[i][d2])
                    cnt3++;
            }

            if (cnt1 <= n / 2 && cnt2 <= n / 2 && cnt1 + cnt2 + cnt3 == n)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}