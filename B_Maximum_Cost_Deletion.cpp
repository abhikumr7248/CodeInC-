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
    ll n,a, b, c;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    ll ans = n * (a + b);
    c = 1;
    vector<ll> v;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            c++;
        else
        {
            v.push_back(c);
            c = 1;
        }
    }
    v.push_back(c);
    c = (int)v.size();
    c /= 2;
    c++;
    c = n * a + c * b;
    ans = max(ans, c);
    cout << ans << "\n";
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