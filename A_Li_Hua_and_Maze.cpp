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
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 == 1 && y1 == 1) || (x1 == 1 && y1 == m) || (x1 == n && y1 == m) || (x1 == n && y1 == 1) || (x2 == 1 && y2 == 1) || (x2 == 1 && y2 == m) || (x2 == n && y2 == m) || (x2 == n && y2 == 1))
        cout << 2 << endl;
    else if (x1 == 1 || x1 == n || y1 == 1 || y1 == m || x2 == 1 || x2 == n || y2 == 1 || y2 == m)
        cout << 3 << endl;
    else
        cout <<4 << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}