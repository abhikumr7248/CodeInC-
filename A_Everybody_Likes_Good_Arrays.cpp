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
    ll n;
    cin >> n;
    vector<ll> ar(n);
    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    ll count = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (ar[i] % 2 == 0 && ar[i + 1] % 2 == 0)
            count++;
        else if (ar[i] % 2 == 1 && ar[i + 1] % 2 == 1)
            count++;
    }
    cout << count << endl;
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