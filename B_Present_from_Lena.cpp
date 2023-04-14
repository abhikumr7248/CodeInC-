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
    int n, s, d, k;
    cin >> n;
    s = 2 * n;
    for (int i = 0; i <= n; i++)
    {
        for (k = 0; k < s; k++)
            cout << " ";
        cout << 0;
        if (i == 0)
        {
            cout << endl;
            s-=2;
            continue;
        }
        for (k = 1; k <= i; k++)
        {
            cout << " " << k;
        }
        for (k -= 2; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
        s-=2;
    }
    s = 2;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int l = 0; l < s; l++)
            cout << " ";
        cout << 0;
        for (k = 1; k <= i; k++)
        {
            cout << " " << k;
        }
        for (k -= 2; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
        s+=2;
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}