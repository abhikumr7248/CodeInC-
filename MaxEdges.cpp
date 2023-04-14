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
    ll v,x,y;
    cin>>v>>x>>y;
    ll ans=0;
    if(x+y<=v)
    {
        ll e=v-(x+y);
        ans+=x*(e+y);
        ans+=e*y;
        ans+=(e*(e-1))/2;
    }
    else
    {
        ll e=x+y-v;
        x=x-e;
        y=y-e;
        e=0;
        ans+=x*(e+y);
        ans+=e*y;
        ans+=e*(e+1)/2;

    }
    cout<<ans<<endl;
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