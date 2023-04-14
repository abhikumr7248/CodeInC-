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
    for (int i = 1; i <= n - 1; i++)
    {
        if (i % 2 == 1)
        {
            cout << "I hate that ";
        }
        else
        {
            cout << "I love that ";
        }
    }
    if (n % 2 == 1)
    {
        cout << "I hate it";
    }
    else
    {
        cout << "I love it";
    }
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