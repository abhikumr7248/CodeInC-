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
    int n, m;
    cin >> n >> m;
    int count = 0;
    if (n < m)
        cout << -1;
    else
    {
        if (n % 2 == 0)
        {
            while (n > 0)
            {
                n = n - 2;
                count++;
            }
        }
        else
        {
            while (n > 1)
            {
                n = n - 2;
                count++;
            }
            count++;
        }
        if (count % m != 0)
        {
            while (count % m != 0)
            {
                count = count - 1;
                count = count + 2;
            }
        }
        cout << count;
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