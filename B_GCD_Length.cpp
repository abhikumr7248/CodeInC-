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
    if (a == 1 && b == 1)
    {
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        string s = "1", m;
        for (int i = 0; i < a - 1; i++)
        {
            s += "0";
        }
        for (int i = 0; i < b - c + 1; i++)
        {
            m += "1";
        }
        string l = "1";
        for (int i = 0; i < c - 1; i++)
        {
            m += "0";
        }
        cout << s << " " << m << endl;
    }
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