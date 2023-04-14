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
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(auto &i: a)
    cin>>i;
    for(auto &i: b)
    cin>>i;
    /*ull sum=0;
    while(a.size()>0)
    {
        ll g=*min_element(b.begin(),b.end());
        ll i;
        for(i=0;i<b.size();++i)
        {
            if(b[i]==g)
            break;
        }
        if(i>0)
        {
            a[i-1]+=b[i];
        }
        if(i<a.size()-1)
        {
            a[i+1]+=b[i];
        }
        sum+=a[i];
        a.erase(a.begin()+i);
        b.erase(b.begin()+i);
    }
    cout<<sum<<endl;*/
    ll ans = 0, l = 0, r = n-1;
    while (l != r)
    {
    if (b[l] < b[r])
    {
        ans += a[l] + b[l];
        l++;
    }
    else
    {
        ans += a[r] + b[r];
        r--;
    }
    }
    ans += a[l];
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