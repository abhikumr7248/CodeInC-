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
    /*int x,y,n;
    cin>>x>>y>>n;
    for(int i=n;i>=0;--i)
    {
        
        if(i%x==y)
        {
            cout<<i<<endl;
            break;
        }
    }*/
    ll x, y, n;
    cin >> x >> y >> n;
    ll cnt = n / x;
    ll ans = x * cnt + y;
    if (ans > n)
    {
        ans -= x;
    }
    cout << ans << endl;
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