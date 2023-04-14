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
int n, m, i;
long long ans;
pair<long long, int> a[1001];
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    
    cin >> n >> m;
    for (i = 0; i < m; i++)
        cin >> a[i].second >> a[i].first;
    sort(a, a + m);
    for (i = m - 1; i >= 0; i--)
        if (n >= a[i].second)
        {
            ans += a[i].second * a[i].first;
            n -= a[i].second;
        }
        else
        {
            ans += n * a[i].first;
            break;
        }

    cout << ans;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
        solve();
    return 0;
}