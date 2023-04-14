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
void solve()
{
    int mod = 998244353;
    /*int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    vector<int> t;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<v[i];++j)
        t.push_back(1);
    }
    ull k=t.size();
    ull ans=k*(k-1);
    cout<<ans%mod<<endl;*/
    ll n;
    cin >> n;
    ll count = 0;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count = (count + arr[i])%mod;
    }
    ll res = (count * (count - 1)) % mod;
    cout << res << endl;
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