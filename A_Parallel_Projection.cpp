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
    int w, d, h, x1, y1, x2, y2;
    cin >> w >> d >> h >> x1 >> y1 >> x2 >> y2;
    int ans = min(x1 + x2 + abs(y1 - y2), y1 + y2 + abs(x1 - x2));
    int ans1 = min(2 * w - x1 - x2 + abs(y1 - y2), 2 * d - y1 - y2 + abs(x1 - x2));
    cout << min(ans, ans1) + h << endl;
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