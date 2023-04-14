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
    ll mod = 1e9 + 7;

    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll r = n * (n - 1);
        for (int i = 1; i <= n; i++)
        {
            r = (r * i) % mod;
        }
        cout << r << endl;
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