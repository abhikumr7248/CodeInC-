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
    ll n, m, d;
    cin >> n>> m>>d;
    vector<ll> p(n);
    vector<ll> a(m);
    ll sum1 = 0, sum2 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        //sum1 += p[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
        //sum2 += a[i];
    }
    int res = 0, pre = -1,pos;

    for (int i = 0; i < m; i++)
    {
        pos = -1;
        for (int j = 0; j < n; j++)
        {
            if (p[j] == a[i])
            {
                pos = j;
                break;
            }
        }
        if (pre != -1)
        {
            if (pos <= pre)
            {
                res = res + (pre - pos + d) / d;
            }
            pre = pos;
        }
        else
        {
            pre = pos;
        }
    }
    cout << res << endl;
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