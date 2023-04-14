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
    /*int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto &x: s)
    mp[x]++;
    int x=mp[s[0]];
    int z=0;
    for(auto &it: mp)
    {
        if(x<it.second)
        x=it.second;
    }
    for(auto &it: mp)
    {
        if(it.second%x!=0)
        z++;
    }
    int a=0;
    if(z!=0 || x!=n)
    cout<<-1;
    else if(n%x!=0)
    cout<<-1;
    else
    {
        int e=n/x;
        while (a != n)
        {
            for (auto &ot : mp)
            {
                int p = 0;
                int q = ot.second / n;
                while (ot.second/x!=p)
                {
                    cout << ot.first;
                    p++;
                }
            }
            a++;
        }
    }*/
    int k;
    cin >> k;
    string str;
    cin >> str;

    map<char, int> mpp;
    for (int i = 0; i < str.length(); i++)
        mpp[str[i]]++;

    string res = "";
    for (auto it : mpp)
    {
        for (int i = 0; i < it.second / k; i++)
        {
            res.push_back(it.first);
        }
    }

    if (res.size() != str.size() / (double)k)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < k; i++)
            cout << res;
        cout << endl;
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}