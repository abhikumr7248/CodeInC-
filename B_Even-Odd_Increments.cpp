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
    /*ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(auto &i:a)
    cin>>i;
    ll t,x;
    for(ll i=0;i<q;++i)
    {
        cin>>t>>x;
        if(t==0)
        {
            for(int j=0;j<n;++j)
            {
                if(a[j]%2==0)
                a[j]=a[j]+x;
            }
        }
        else
        {
            for (int j = 0; j < n; ++j)
            {
                if (a[j] % 2 != 0)
                a[j] = a[j] + x;
            }
        }
    }
    for(int i=0;i<n;++i)
    cout<<a[i]<<endl;*/
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    ll sum=0,odd=0,even=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            ll x;
            cin >> x;
            sum += (x * odd);
            if (x % 2 == 1)
            {
                even += odd;
                odd = 0;
            }
        }
        else
        {
            ll x;
            cin >> x;
            sum += (x * even);
            if (x % 2 == 1)
            {
                odd += even;
                even = 0;
            }
        }
        cout << sum << "\n";
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