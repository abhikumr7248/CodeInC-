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
ll getAdd(ll x)
{
    ll m1 = 10, m2 = 0;
    while (x > 0)
    {
        ll y = x % 10;
        x /= 10;
        m1 = min(m1, y);
        m2 = max(m2, y);
    }
    return m1 * m2;
}
void solve()
{
    ll x, k;
    cin>>x>>k;
    k--;
    while (k--)
    {
        ll y = getAdd(x);
        if (y == 0)
            break;
        x += y;
    }
    cout<<x<<endl;
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