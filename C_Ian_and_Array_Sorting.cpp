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
void runLoop(int n,vector<ll>& arr)
{
    
    ll a = arr.back();
    for (ll i = n - 2; i > 0; i--)
    {
        if (arr[i] >= a)
        {
            ll b = arr[i] - a;
            arr[i] -= b;
            arr[i - 1] -= b;
        }
        else
        {
            ll b = a - arr[i];
            arr[i] += b;
            arr[i - 1] += b;
        }
    }
}
void run(int n,vector<ll>& arr)
{
    ll f = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            f = 0;
            break;
        }
    }
    if (f != 0)
    {
        cout << "YES" << endl;
        return;
    }
    runLoop(n,arr);
    if (arr[0] <= arr.back())
    {
        cout << "YES" << endl;
    }
    else
    {
        if (n % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
void solve()
{
ll n;
cin >> n;
vector<ll> arr(n);
for (ll i = 0; i < n; i++)
{
    cin >> arr[i];
}
    run(n,arr);
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