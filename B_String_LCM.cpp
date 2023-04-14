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
    /*string s,t;
    cin>>s>>t;
    ull x,y;
    x=s.length();
    y=t.length();
    ull l;
    l=(x*y);
    l=l/(__gcd(x,y));
    unordered_map<char,int> mp;
    for(auto &it: s)
    mp[it]++;
    l=l/mp.size();
    cout<<l;
    double w=x/mp.size();
    double v=y/mp.size();
    double p=l/w;
    double q=l/v;
    p--;
    q--;
    while(p>0)
    {
        s+=s;
        p--;
    }
    while(q>0)
    {
        t+=t;
        q--;
    }
    for (int i = 0; i < s.length(); ++i)
        cout << s[i];
        cout<<endl;
    if(s==t)
    {
        for(int i=0;i<s.length();++i)
        cout<<s[i];
    }
    else
    cout<<-1;
    cout<<endl;*/
    string s1, s2;
    int a, b;
    cin >> s1 >> s2;
    a = s1.size();
    b = s2.size();
    int g = a * b / __gcd(a, b);
    string t1, t2;
    for (int i = g / a; i >= 1; i--)
        t1 += s1;
    for (int i = g / b; i >= 1; i--)
        t2 += s2;
    if (t1 == t2)
    {
        cout << t1 << endl;
    }
    else
    {
        cout << -1<<endl;
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