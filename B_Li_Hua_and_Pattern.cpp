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
void s(int n, int k, vector<vector<ll>>& a)
{
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        ll cnt = 0;
        for (int i = 0; i < n / 2; ++i)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == a[n - i - 1][n - j - 1])
                    ;
                else
                    cnt++;
            }
        }
        if (n % 2 == 1)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (a[n / 2][j] != a[n / 2][n - j - 1])
                    cnt++;
                // else
                //     cnt++;
            }
        }
        if (cnt > k)
            cout << "NO" << endl;
        else
        {
            k -= cnt;
            if (k % 2 == 0 || (n & 1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<vector<ll>> a; 
    for(int i=0;i<n;++i)
    {
        vector<ll> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        a.push_back(v);
    }
    s(n,k,a);
    
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