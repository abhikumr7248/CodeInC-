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
    /*
    string s,s1,s2;
    cin>>s;
    int k=n/2;
    for(int i=0;i<k;++i)
    s1.push_back(s[i]);
    for(int i=k;i<n;++i)
    s2.push_back(s[i]);
    int i=s1.size()-1;
    int j=0;
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
    for(auto &it: s1)
    mp1[it]++;
    c+=mp1.size();
    for(auto &ot: s2)
    mp2[ot]++;
    c+=mp2.size();
    while(true)
    {
        if(mp1.find(s1[j])==mp1.end())
        {
            if(mp2[s2[j]]>1)
            c++;
        }
        else if(mp2.find())
    }*/
    string s;
    ll n;
    cin >> n;
    cin >> s;
    unordered_map<char,int> a,b;
    ll e = 0, t = 0, m = 0;
    for (char c = 'a'; c <= 'z'; c++)
        a[c] = 0;
    for (int i = 0; i < n; i++)
    {
        b[s[i]]++;
        if (b[s[i]] == 1)
            t++;
    }
    m = t;
    for (int i = 0; i < n; i++)
    {
        a[s[i]]++;
        if (a[s[i]] == 1)
            e++;
        b[s[i]]--;
        if (b[s[i]] == 0)
            t--;
        m= max(m, t + e);
    }
    cout << m << endl;
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