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
    int m, s;
    cin >> m >> s;
    vector<int> v(m);
    std::vector<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int maxi = *max_element(v.begin(), v.end());
    for (int i = 1; i <= maxi; i++)
    {
        it = std::find(v.begin(), v.end(), i);
        if (it == v.end())
            s -= i;
    }
    for (int i = maxi + 1; i <= 1000; i++)
    {
        if (s != 0)
        {
            s -= i;
        }
    }
    if (s == 0)
        cout << "YES" << endl;
    else
        cout << "NO" <<endl;
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