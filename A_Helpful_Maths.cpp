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
    vector<char> v;
    for (auto &x : s)
    {
        if (x != '+')
            v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; ++i)
        cout << v[i] << '+';
    cout << v[v.size() - 1];
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}