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
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int ans = min(k2, min(k5, k6));
    k2 -= ans;
    k5 -= ans;
    k6 -= ans;

    ans *= 256;

    ans += 32 * min(k3, k2);
    cout << ans <<endl;
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