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
    int i[3000] = {0}, a = 2;
    i[1] = 2, i[2] = 3;
    for (int c = 4; c <= 3000; c++)
    {
        int b = 0;
        for (int d = 2; d * d <= c; d++)
        {
            if (c % d == 0)
            {
                b = 1;
                break;
            }
        }
        if (!b)
            i[++a] = c;
    }
    int n, ans = 0;
    cin >> n;
    for (int c = 2; c <= n; c++)
    {
        int k = 0;
        for (int d = 1; d <= c; d++)
        {
            if (c % i[d] == 0)
            {
                k++;
                if (k > 2)
                    break;
            }
            if (i[d] > c / 2)
                break;
        }
        if (k == 2)
        {
            ans++;
        }
    }
    cout << ans;
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