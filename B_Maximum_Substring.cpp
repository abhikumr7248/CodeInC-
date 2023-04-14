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
    int n;
    cin>>n;
    string s;
    cin>>s;
    /*int x=0;
    int y=0;
    int maxx=INT_MIN;
    int maxy=INT_MIN;
    int i=0;
    while(i<n)
    {
        if(s[i]=='0')
        {
            x=0;
            while(s[i]=='0' && i<n)
            {
                x++;
                i++;
            }
            if(x>maxx)
            maxx=x;
        }
        //if (s[i] == '1')
        else
        {
            y = 0;
            while (s[i] == '1' && i < n)
            {
                y++;
                i++;
            }
            if (y > maxy)
                maxy = y;
        }
    }
    int a=0,b=0;
    for(int j=0;j<n;++j)
    {
        if(s[j]=='0')
        a++;
        if(s[j]=='1')
        b++;
    }
    int p=maxx*maxx;
    int q=maxy*maxy;
    int r=a*b;
    int e=max(p,q);
    int f=max(e,r);
    cout<<f<<endl;*/
    ll x = 0, y = 0;
    ll c = 0, cnt = 0, cx = 0, cy = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
            cx++;
            c = 0;
        }
        else
        {
            cy++;
            c++;
            cnt = 0;
        }
        x = max(x, cnt);
        y = max(y, c);
    }
    cout << max({x * x, y * y, cx * cy}) << endl;
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