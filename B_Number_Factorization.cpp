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
int g, abh;
int maxi;
map<int, int> mpp;
void ff(int n)
{
    abh = n;
    maxi = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (abh % i == 0)
        {
            int count = 0;
            while (abh % i == 0)
            {
                count++;
                abh = abh / i;
            }
            mpp[i] = count;
            if (count > maxi)
            {
                maxi = count;
            }
        }
    }
    if (abh != 1)
    {
        mpp[abh] = 1;
    }
}

void solve()
{

    cin >> g;
    ff(g);
    int res = 0;
    for (int i = 0; i < maxi; i++)
    {
        int a = 1;
        for (auto it : mpp)
        {
            if (it.second > 0)
            {
                mpp[it.first] = mpp[it.first] - 1;
                a = a * it.first;
            }
        }
        res = res + a;
    }
    cout << res << endl;
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