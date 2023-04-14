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
string s;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    if (s.find(a) != -1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 0; i <= 1000; i++)
    {
        if (i % 3 == 0)
        {
            s.push_back('F');
        }
        if (i % 5 == 0)
        {
            s.push_back('B');
        }
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}