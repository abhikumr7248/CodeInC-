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
    ull x;
    cin>>x;
    vector<ull> v(x);
    for(auto &i:v)
    cin>>i;
    ull t,r,c,d;
    for(ull i=0;i<x;++i)
    {
        t=v[i];
        r=t/14;
        if(r==1 && t%14==0)
        cout<<"NO"<<endl;
        else if(r<1)
        cout<<"NO"<<endl;
        else
        {
            c=r*14;
            d=t-c;
            if(d>=1 && d<=6)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
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