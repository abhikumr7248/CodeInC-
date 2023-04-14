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
    string s = "";
    for (int i = 0; i < m; i++)
    {
        s += 'B';
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        int q = m + 1 - k;
        k--;

        if (s[k] == 'B' && s[q - 1] == 'B')
        {
            k = min(k, q - 1);
            s[k] = 'A';
        }
        else if (s[k] == 'A' && s[q - 1] == 'B')
        {
            s[q - 1] = 'A';
        }
        else if (s[k] == 'B' && s[q - 1] == 'A')
        {
            s[k] = 'A';
        }
    }
    cout << s << endl;
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