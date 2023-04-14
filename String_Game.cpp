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
    cin >> n;
    string str;
    cin >> str;

    unordered_map<char, int> mp;

    for(auto &it: str)
    mp[it]++;

    int flag = 1;
    for (auto &x : mp)
    {
        if (x.second % 2 != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag==1)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
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