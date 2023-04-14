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
    int n, k;
    cin >> n >> k;
    vector<int> cnt(51, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l <= k and k <= r)
        {
            for (int j = l; j <= r; j++)
            {
                cnt[j]++;
            }
        }
    }
    for (int i = 1; i <= 50; i++)
    {
        if (i == k)
            continue;
        if (cnt[i] >= cnt[k])
        {
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" <<endl;
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