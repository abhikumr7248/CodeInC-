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
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        vector<int>cn(10);
        int d=0;
        for(int j=i;j<min(i+100,n);++j)
        {
            auto c=s[j]-'0';
            if(cn[c]==0)
            {
                d++;
            }
            cn[c]++;
            if(*max_element(cn.begin(),cn.end())<=d)
            ans++;
        }
    }
    cout<<ans<<endl;
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