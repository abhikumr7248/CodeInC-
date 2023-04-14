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
    ull n;
    cin >> n;
    vector<ull> v;
    vector<ull> p;
    while (n > 0)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    if (v[0] - 9 != 0 && (9 - v[0]) < v[0])
        p.push_back(9 - v[0]);
    else
        p.push_back(v[0]);
    for (ull i = 1; i < v.size(); ++i)
    {
        if ((9 - v[i]) < v[i])
            p.push_back(9 - v[i]);
        else
            p.push_back(v[i]);
    }
    for (ull i = 0; i < p.size(); ++i)
        cout << p[i];
}
/*------------------------------------------------------------------------------------------------------------------------------*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}