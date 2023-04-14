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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    /*map<int,int> mp;
    for(auto &x: v)
    mp[x]++;
    if(mp.size()==1)
    cout<<0<<endl;
    else
    {
        int x=mp.size();
        sort(v.begin(),v.end());
        int t=0;
        for(int i=v.size()-1;i>=0;--i)
        {
            if (v[i] % v[0] != 0)
            {
                t = 1;
                break;
            }
        }
        if(t!=0)
        {
            cout<<mp.size()<<endl;
        }
        else*/
    int res = n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll gcd = __gcd(v[0], v[1]);
    for (int i = 1; i < n; i++)
    {
        gcd = __gcd(gcd, v[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != gcd)
        {
            if (v[i] / gcd == gcd)
            {
                count++;
            }
            else
            {
                count++;
            }
        }
    }
    cout << count << endl;
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