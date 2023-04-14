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
void outp(ll n, vector<vector<ll>>& ans)
{
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
void solve()
{
    ll i, j, k, n, m;
    cin >> n;
    vector<vector<ll>> ans(2,vector<ll> (n));
    ll mx = 2 * n;
    ans[0][0] = mx;
    ans[1][n - 1] = mx - 1;
    ll front = 1, back = mx - 2;
    for (i = 0; i < n - 1; i++)
    {
        if (i%2==1)
        {
            ans[1][i] = back - 1;
            ans[0][i + 1] = back;
            back -= 2;
        }
        else
        {
            ans[1][i] = front;
            ans[0][i + 1] = front + 1;
            front += 2;
        }
    }
    outp(n,ans);
    
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