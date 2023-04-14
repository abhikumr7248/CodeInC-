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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int u = 0, d = 0, r = 0, l = 0;

        for (int j = i; j < s.size(); j++)
        {
            if (s[j] == 'U')
                u++;
            if (s[j] == 'D')
                d++;
            if (s[j] == 'L')
                l++;
            if (s[j] == 'R')
                r++;

            if (u == 0 && d == 0)
            {
                if (r == l)
                    cnt++;
            }
            else if (r == 0 && l == 0)
            {
                if (u == d)
                    cnt++;
            }
            else if (u == d && r == l)
                cnt++;
        }
    }

    cout << cnt << endl;
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