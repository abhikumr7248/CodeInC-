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
    ll w,h;
    cin>>w>>h;
    vector<ll> v;
    ll a;
    cin >> a;
    vector<ll> z(a);
    for (auto &j : z)
        cin >> j;
    v.push_back(h*(z[a-1]-z[0]));
    ll b;
    cin >> b;
    vector<ll> y(b);
    for (auto &j : y)
        cin >> j;
    v.push_back(h * (y[b - 1] - y[0]));
    ll c;
    cin >> c;
    vector<ll> x(c);
    for (auto &j : x)
        cin >> j;
    v.push_back(w* (x[c - 1] - x[0]));
    ll d;
    cin >> d;
    vector<ll> q(d);
    for (auto &j : q)
        cin >> j;
    v.push_back(w * (q[d - 1] - q[0]));
    sort(v.begin(),v.end(),greater<ll>());
    cout<<v[0]<<endl;
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