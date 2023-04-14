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
    string s;
    cin >> s;
    int f = 0, g = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '4')
            f++;
        if (s[i] == '7')
            g++;
    }
    if (f + g == 4 || f + g == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}