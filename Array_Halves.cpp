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
    cin>>n;
    ll m[2*n];
    for(int i=0;i<2*n;++i)
    {
        cin>>m[i];
    }
    vector<ll> d1;
    vector<ll> d2;
    for(int i=0;i<2*n;++i)
    {
        if(m[i]>n && i<n)
        d1.push_back(i+1);;
        if(m[i]<=n && i>=n)
        d2.push_back(i+1);
    }
    sort(d1.begin(),d1.end());
    sort(d2.begin(),d2.end());
    ll ans=0;
    for(int i=0;i<d1.size();++i)
    {
        ans+=abs(d1[i]-d2[i]);
    }
    cout<<ans<<endl;
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