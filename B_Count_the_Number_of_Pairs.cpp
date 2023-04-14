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
    int n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    vector<char> temp;
    for (auto &it : s)
    {
        if (islower(it))
            mp[it]++;
        else
            temp.push_back(it);
    }
    sort(temp.begin(),temp.end());
    // for(int i=0;i<temp.size();++i)
    // cout<<temp[i]<<" ";
    // cout<<endl;
    for (int i = 0; i < temp.size(); ++i)
    {
        char g=tolower(temp[i]);
        //cout<<g<<endl;
        if (mp.find(g) != mp.end())
        {
            if(mp[g]>0)
            {
            mp[g]--;
            temp.erase(temp.begin()+i);
            i--;
            ans++;
            }
            
        }
        if (mp[g] <= 0)
            mp.erase(g);
    }
    for(auto &ot: mp)
    {
        int z=0;
        z=ot.second/2;
        if(z<k)
        {
            k=k-z;
            ans+=z;
        }
        else
        {
            ans+=k;
            k=0;
            break;
        }

    }
    mp.clear();
    for(auto &ot: temp)
    mp[ot]++;
    for (auto &ot : mp)
    {
    int z = 0;
    z = ot.second / 2;
    if (z < k)
    {
            k = k - z;
            ans += z;
    }
    else
    {
            ans += k;
            k = 0;
            break;
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