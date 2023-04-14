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
    ll n, k;
    cin >> n >> k;
    vector<int> req(n), have(n);
    for (int i = 0; i < n; i++)
        cin >> req[i];
    for (int i = 0; i < n; i++)
        cin >> have[i];

    ll low = 0, high = 2001;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll z = 0, cost = 0;
        for (int i = 0; i < n; i++)
            cost += max(req[i] * mid - have[i], z);
        if (cost <= k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << high;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        solve();
    return 0;
}