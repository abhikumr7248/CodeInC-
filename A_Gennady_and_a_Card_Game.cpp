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
    string s;
    cin>>s;
    vector<string> st(5);
    for(auto &i: st)
    cin>>i;
    map<char,int> mp;
    for(int i=0;i<5;++i)
    {
        string t=st[i];
        mp[t[0]]++;
        mp[t[1]]++;
    }
    if(mp.find(s[0])!=mp.end())
    cout<<"YES";
    else if(mp.find(s[1])!=mp.end())
    cout<<"YES";
    else
    cout<<"NO";


}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}