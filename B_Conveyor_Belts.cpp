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
    int n, x, y, xx, yy;
    cin >> n >> x >> y >> xx >> yy;
    int x1 = min(x, n - x + 1);
    int y1 = min(y, n - y + 1);
    int x2 = min(xx, n - xx + 1);
    int y2 = min(yy, n - yy + 1);
    int a1 = min(x1, y1);
    int a2 = min(x2, y2);
    int ans = abs(a1 - a2);
    cout << ans <<endl;
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