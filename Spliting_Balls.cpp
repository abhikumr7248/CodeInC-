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
/*ll mod=1e9+7;
vector<long long> fact;
ll s = 1000000;

void factorial()
{
    ll i;
    fact.push_back((ll)1);
    for (i = 1; i <= s; i++)
    {
        fact.push_back((fact[i - 1]%mod * i%mod) % mod);
    }
}

void solve()
{
    /*ll n;
    cin >> n;
    ll count = 0;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        count = (count + arr[i]) % mod;
        else
            count = (count + (arr[i]*(arr[i]-1))) % mod;
    }
    cout<<count%mod<<endl;
    ll n;
    cin >> n;

    ll tmp;
    ll res = 0;
    factorial();
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        res = (res + fact[tmp]%mod) % mod;
    }

    cout<<res%mod<<endl;
}*/
unordered_map<ll,ll> mp;
ll mod=1e9+7;
ll fact(ll n)
{
    if(n==1 || n==0)
    return 1;
    if(mp.find(n)!=mp.end())
    {
        return mp[n];
    }
    return mp[n]=n%mod*fact(n-1)%mod;
}
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> arr(n);
    for (auto &i: arr)
    {
        cin>>i;
    }
    for(int i=0;i<n;++i)
    {
        ans=(ans+fact(arr[i])%mod)%mod;
    }
    cout<<ans%mod<<endl;
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