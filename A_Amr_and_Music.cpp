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
    int n, k, i, temp, sum, res;
    vector<pair<int, int>> val;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        val.push_back(make_pair(temp, i + 1));
    }
    sort(val.begin(), val.end());

    for (i = 0; i < n; i++)
    {
        sum = sum + val[i].first;
        if (sum > k)
            break;
    }

    res = i;
    cout << res << "\n";
    for (i = 0; i < res; i++)
        cout << val[i].second << " ";
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}