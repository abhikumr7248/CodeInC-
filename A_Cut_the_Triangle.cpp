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
    vector<int> v(6);
    for(auto &i: v)
    cin>>i;
    /*unordered_map<int,int> mp;
    for(auto &x: v)
    mp[x]++;
    if(mp.size()!=2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;*/
    if (v[0] != v[2] && v[2] != v[4] && v[4] != v[0] || v[1] != v[3] && v[3] != v[5] && v[5] != v[1])
    {
    printf("YES\n");
    }
    else
    {
    printf("NO\n");
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