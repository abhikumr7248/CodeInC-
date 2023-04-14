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
    /*int x, y;
    cin >> x >> y;
    int a,b;
    cin>>a>>b;
    int p=min(x,y);
    //cout << p << endl;
    ull m=a*x;
    ull n=a*y;
    ull t=p*b;
    ull g = max(x, y);
    //cout << g << endl;
    g = g - p;
    g=g*a;
    ull ans;
    if(t+g<m+n)
    {
        ans=t;
        
        ans+=g;
    }
    else
    {
        ans=x*a+y*a;
    }
    cout<<ans<<endl;*/
    ll x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;

    ll dolar = 0;
    dolar = abs(x - y) * a + min(x, y) * min(b, 2 * a);
    cout << dolar << endl;
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