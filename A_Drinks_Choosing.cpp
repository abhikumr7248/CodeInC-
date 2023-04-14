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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &i: v)
    cin>>i;
    ll ans=0,sum=0;
    map<int,int> mp;
    for(auto &it: v)
    mp[it]++;
    for(auto &ot: mp)
    {
        if(ot.second%2==0)
        ans+=ot.second;
        else
        {
            ans+=ot.second;
            ans-=1;
            sum+=1;
        }
    }
    if(sum%2==0)
    ans+=sum/2;
    else
    {
        ans+=sum/2;
        ans+=1;
    }
    cout<<ans;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}