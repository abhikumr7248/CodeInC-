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
    /*int x;
    cin>>x;
    string v;
    cin>>v;
    ll n=stoi(v);
    vector<int> s;
    while(n>0)
    {
        s.push_back(n%10);
        n=n/10;
    }
    for(int i=0;i<x;++i)
    {
        if(v[i]=='0')
        {
            s.push_back(0);
        }
        else
        break;
    }
    reverse(s.begin(),s.end());
    for(int i=1;i<x;++i)
    {
        if(s[i-1]==0 && s[i]==0)
        {
        cout<<'+';
        s[i]+=s[i-1];
        }
        else if(s[i-1]==1 && s[i]==1)
        {
        cout<<'-';
        s[i]-=s[i-1];
        }
        else
        {
            cout<<'+';
            s[i]+=s[i-1];
        }
        //cout<<s[i-1];

    }
    cout<<endl;*/
    int r;
    cin>>r;
    string m;
    cin>>m;
    int s=m[0]-'0';
    string ans="";
    for(int i=1;i<r;++i)
    {
        if(s==0)
        {
            ans+="+";
            s+=(m[i]-'0');
        }
        else
        {
            ans+="-";
            s-=(m[i]-'0');
        }
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
