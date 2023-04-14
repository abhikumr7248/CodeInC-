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
    ll n, s;
    cin >> n >> s;
    vector<ll> MARTIN(n);
    for (int i = 0; i < n; i++)
        cin >> MARTIN[i];

    ll previous[n][2];

    if (MARTIN[1] >= s)

    {

        previous[1][0] = MARTIN[0] * s;

        previous[1][1] = MARTIN[0] * (MARTIN[1] - s);
    }

    else

    {

        previous[1][0] = MARTIN[0] * 0;

        previous[1][1] = MARTIN[0] * MARTIN[1];
    }

    for (int i = 2; i < n; i++)

    {

        if (MARTIN[i] >= s)

        {

            if (MARTIN[i - 1] >= s)

            {

                previous[i][0] = min(previous[i - 1][0] + (MARTIN[i - 1] - s) * s,

                                     previous[i - 1][1] + s * s);

                previous[i][1] = min(previous[i - 1][0] + (MARTIN[i - 1] - s) * (MARTIN[i] - s),

                                     previous[i - 1][1] + s * (MARTIN[i] - s));
            }

            else

            {

                previous[i][0] = min(previous[i - 1][0] + MARTIN[i - 1] * s,

                                     previous[i - 1][1] + 0 * s);

                previous[i][1] = min(previous[i - 1][0] + MARTIN[i - 1] * (MARTIN[i] - s),

                                     previous[i - 1][1] + 0 * (MARTIN[i] - s));
            }
        }

        else

        {

            if (MARTIN[i - 1] >= s)

            {

                previous[i][0] = min(previous[i - 1][0] + (MARTIN[i - 1] - s) * 0,

                                     previous[i - 1][1] + s * 0);

                previous[i][1] = min(previous[i - 1][0] + (MARTIN[i - 1] - s) * (MARTIN[i]),

                                     previous[i - 1][1] + s * (MARTIN[i]));
            }

            else

            {

                previous[i][0] = min(previous[i - 1][0] + MARTIN[i - 1] * 0,

                                     previous[i - 1][1] + 0 * 0);

                previous[i][1] = min(previous[i - 1][0] + MARTIN[i - 1] * (MARTIN[i]),

                                     previous[i - 1][1] + 0 * (MARTIN[i]));
            }
        }
    }

    ll answer;

    if (MARTIN[n - 2] >= s)

    {

        answer = min(previous[n - 2][0] + (MARTIN[n - 2] - s) * MARTIN[n - 1],

                     previous[n - 2][1] + s * MARTIN[n - 1]);
    }

    else

    {

        answer = min(previous[n - 2][0] + MARTIN[n - 2] * MARTIN[n - 1],

                     previous[n - 2][1] + 0 * MARTIN[n - 1]);
    }

    cout << answer << endl;
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