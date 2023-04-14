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
    string ans;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'y' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            i++;
        }
        else
        {
            ans.push_back('.');
            ans.push_back(s[i]);
            i++;
        }
    }
    cout << ans;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}