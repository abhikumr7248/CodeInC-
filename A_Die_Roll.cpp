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
    int y, w;
    cin >> y >> w;
    if (y < w)
        y = w;
    y = 7 - y;
    switch (y)
    {
    case 1:
    {
        cout << "1/6";
        break;
    }
    case 2:
    {
        cout << "1/3";
        break;
    }
    case 3:
    {
        cout << "1/2";
        break;
    }
    case 4:
    {
        cout << "2/3";
        break;
    }
    case 5:
    {
        cout << "5/6";
        break;
    }
    case 6:
    {
        cout << "1/1";
        break;
    }
    }
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