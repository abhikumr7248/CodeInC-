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

    vector<ll> arr(n);
    for (auto &i: arr)
    {
        cin >> i;
    }
    int g=0;
    for (int i = 0; i < 257; i++)
    {
        vector<ll> arr2(n);
        for (int j = 0; j < n; j++)
        {
            arr2[j] = arr[j] ^ i;
        }
        int res = 0;
        for (int z = 0; z < n; z++)
        {
            res = res ^ arr2[z];
        }
        if (res == 0)
        {
            cout << i << endl;
            g=1;
            break;
        }
    }
    if(g==0)
    cout << -1 << endl;
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