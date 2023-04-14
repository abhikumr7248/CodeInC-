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
    int a, b, n;
    cin >> a >> b >> n;
    int flag1 = 0;
    int val;
    while (n > 0)
    {
        if (flag1 == 0)
        {
            val = __gcd(a, n);
            n -= val;
            flag1 = 1;
        }
        else
        {
            val = __gcd(b, n);
            n -= val;
            flag1 = 0;
        }
    }
    if (flag1 == 1)
    {
        cout << "0";
    }
    else
    {
        cout << "1";
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