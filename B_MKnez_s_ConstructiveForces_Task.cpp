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
    if (n % 2 == 0)
    {
        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i)
        {
            cout << (1 - i % 2) * 2 - 1 << ' ';
        }
        cout << endl;
    }
    else
    {
        if (n == 3)
        {
            cout << "NO"<<endl;
           
        }
        else
        {
        cout << "YES"<<endl;
        int k = (n + 1) / 2;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                cout << k - 2 << ' ';
            }
            else
            {
                cout << -(k - 1) << ' ';
            }
        }
        cout <<endl;
        }
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