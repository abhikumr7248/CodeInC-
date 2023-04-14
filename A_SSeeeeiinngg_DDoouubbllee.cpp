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
    string s;
    cin>>s;
    s+=s;
    unordered_map<char,int> mp;
    for(auto &it: s)
    mp[it]++;
    string ans,temp;
    for(auto &ot: mp)
    {
        int j=ot.second/2;
        ot.second=ot.second/2;
        for(int i=0;i<j;++i)
        ans.push_back(ot.first);
    }
    for (auto &ot : mp)
    {
        
        for (int i = 0; i < ot.second; ++i)
        temp.push_back(ot.first);
    }
    reverse(temp.begin(),temp.end());
    ans+=temp;
    for(int i=0;i<ans.size();++i)
    cout<<ans[i];
    cout<<endl;
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