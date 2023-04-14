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
    ll r, g, b, w;
    cin >> r >> g >> b >> w;
    ll x = r % 2 + g % 2 + b % 2 + w % 2;
    if (x <= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (r > 0 && g > 0 && b > 0)
        {
            r = r - 1;
            g = g - 1;
            b = b - 1;
            w = w + 3;
            x = r % 2 + g % 2 + b % 2 + w % 2;
            if (x <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {

                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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