#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        st.insert(x);
        st.insert(y);
    }
    if (n == 1 || st.size() == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}