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
    int a, b, c;
    cin >> a >> b >> c;
    int dist = 0;
    if (a <= b)
    {
        dist += a;
        if (c >= a + b)
            dist += (a + b);
        else
            dist += c;
        if (b <= a + c)
            dist += b;
        else
            dist += (a + c);
    }
    else
    {
        dist += b;
        if (c >= a + b)
            dist += (a + b);
        else
            dist += c;
        if (a <= b + c)
            dist += a;
        else
            dist += (b + c);
    }
    cout << dist << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
        solve();
    return 0;
}
