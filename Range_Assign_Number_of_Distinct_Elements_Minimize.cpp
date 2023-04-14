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
    int n;
    cin>>n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] == a[n - 1] or a[1] == a[n - 1] or a[0] == a[n - 2])
    {
        cout << "Yes\n";
        
    }
    else
    {
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int y;
        int x = lower_bound(a.begin() + i + 1, a.end(), a[i]) - a.begin();
        if (a[x] == a[i] and x < n - 1)
        {
            y = lower_bound(a.begin() + x + 1, a.end(), a[x + 1]) - a.begin();
        }
        if (y >= n - 1)
        {
            flag = 1;
            cout << "No\n";
            break;
        }
    }
    if (flag == 0)
        cout << "Yes\n";
    }
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