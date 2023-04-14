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
    int n,m;
    string s,t;
    cin>>n>>m;
    cin>>s>>t;
    int x=0,y=0;
    for(int i=0;i<s.size()-1;++i)
    {
        if(s[i]==s[i+1])
        {
            x=1;
            break;
        }
    }
    for (int i = 0; i < t.size() - 1; ++i)
    {
        if (t[i] == t[i + 1])
        {
            y = 1;
            break;
        }
    }
    if(x==0 && y==0)
    cout<<"YES"<<endl;
    else
    {
        if(s[s.size()-1]==t[t.size()-1])
        cout<<"NO"<<endl;
        else
        {
            int p=0;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                p++;
            }
        }
        for (int i = 0; i < t.size() - 1; ++i)
        {
            if (t[i] == t[i + 1])
            {
                p++;
            }
        }
        if(p<2)
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
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}