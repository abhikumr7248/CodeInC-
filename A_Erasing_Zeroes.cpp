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
    string s;
    cin >> s;
    int count = 0;
    int l = 0, r = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '1')
        {
            l = i;
            break;
        }
    }
    for (int i = s.length() - 1; i >= 0; --i)
    {
        if (s[i] == '1')
        {
            r = i;
            break;
        }
    }
    for (int i = l; i <= r; ++i)
    {
        if (s[i] == '0')
            count++;
    }
    unordered_map<char, int> mp;
    for (auto &x : s)
        mp[x]++;
    if (mp.size() == 1)
        cout << 0 << endl;
    else
        cout << count << endl;
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