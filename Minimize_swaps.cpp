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
    int n = s.size();
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    if (abs(odd - even) % 3 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int f = 0, x = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                f++;
        }
        if (f == 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (((i % 2 == 1) || (n - 1) % 2 == 1) && (s[i] != s[i - 1]) && i != 1 && i != n - 1)
                {
                    cout << 3 << endl;
                    x = 1;
                    break;
                }
            }
        }
        if (abs(even - odd) % 3 == 2)
        {
            if ((even + odd) == n)
                cout << -1 << endl;
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            if ((even + odd) > n - 1)
                cout << -1 << endl;
            else
            {
                bool flag = false;
                for (int i = 0; i < n; i++)
                {
                    if (even > odd)
                    {
                        if (i % 2 != 0 && s[i] == '1')
                        {
                            if ((i - 1) >= 0 && s[i - 1] == '0')
                            {
                                flag = true;
                                break;
                            }
                            if (i + 1 < n && s[i + 1] == '0')
                            {
                                flag = true;
                                break;
                            }
                        }
                    }
                    else
                    {
                        if (i % 2 == 0 && s[i] == '1')
                        {
                            if ((i - 1) >= 0 && s[i - 1] == '0')
                            {
                                flag = true;
                                break;
                            }
                            if (i + 1 < n && s[i + 1] == '0')
                            {
                                flag = true;
                                break;
                            }
                        }
                    }
                }
                if (flag)
                    cout << 1 << endl;
                else
                {
                    if (odd + even == n - 1)
                        cout << -1 << endl;
                    else
                    {
                        if (odd > even)
                        {
                            int ct = 0;
                            for (int i = 0; i < n; i++)
                            {
                                if (i % 2 == 0)
                                    ct++;
                            }
                            if (odd < 2 || ct < 2)
                                cout << -1 << endl;
                            else
                                cout << 2 << endl;
                        }
                        else
                        {
                            int ct = 0;
                            for (int i = 0; i < n; i++)
                            {
                                if (i % 2 != 0)
                                    ct++;
                            }
                            if (even < 2 || ct < 2)
                                cout << -1 << endl;
                            else
                                cout << 2 << endl;
                        }
                    }
                }
            }
        }
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}