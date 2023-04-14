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
    /*ull x,y,z;
    cin>>x>>y>>z;
    ull a;
    a=x+y;
    cout<<a/z<<" ";
    vector<ull> v(4);
    v[0]=x%z;
    v[1]=y%z;
    ull p=x+z;
    ull q=y+z;
    ull f=p%z;
    ull g=q%z;
    v[2]=z-f;
    v[3]=z-g;
    sort(v.begin(),v.end());
    cout<<v[0];*/
    ll x, y, z;
    cin >> x >> y >> z;
    cout << (x + y) / z << " ";
    ll a = x % z;
    ll b = y % z;
    if (x / z + y / z == (x + y) / z)
        cout << 0 << endl;
    else
    {
        cout << min(z - a, z - b) << endl;
    }
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