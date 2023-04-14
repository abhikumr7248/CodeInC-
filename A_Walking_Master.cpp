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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=0;
    if(d<b)
    cout<<-1<<endl;
    else
    {
    if(b<=d)
    {
       ll z=d-b;
       a=a+z;
       b=b+z;
       ans+=z;
       //cout<<a<<" "<<b<<endl;
    }
    if(a>c)
    {
        ll g=a-c;
        a=a-g;
        ans+=g;
        //cout<<a<<" "<<-98765<<endl;
    }
    if (a < c)
        cout << -1 << endl;
    else
    cout<<ans<<endl;
    }
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