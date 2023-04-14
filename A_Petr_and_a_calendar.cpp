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
    int m, d;
    cin >> m >> d;
    int A[10] = {1, 3, 5, 7, 8, 10, 12};
    for (int i = 0; i < 7; i++)
    {
        if (m == A[i])
        {
            if (d >= 6)
            {
                cout <<6<<endl;
            }
            else
                cout <<5<<endl;
            return;
        }
    }
    if (m == 2)
    {
        if (d != 1)
            cout <<5<<endl;
        else
            cout <<4<<endl;
        return;
    }
    else
    {
        if (d == 7)
        {
            cout <<6<<endl;
        }
        else
            cout <<5<<endl;
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
        solve();
    return 0;
}