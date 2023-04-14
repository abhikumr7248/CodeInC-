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
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
class Solution
{
private:
int n;
unordered_map<int,int> mp;
int count=0;
vector<int> v;
int mini=0;
public:
    void input()
    {
        cin>>n;
        v.resize(n*2);
        for(auto &it: v)
        cin>>it;
    }
    void solve()
    {
        for(int i=0;i<v.size();++i)
        {
            mp[v[i]]++;
            if(mp[v[i]]==2)
            {
            mp[v[i]]=0;
            mini--;
            }
            else
            {
                mini++;
            }
            count=max(count,mini);
            // count=fmax(count,mp.size());
        }
        cout<<count<<endl;

    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // Solution S[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     S[i].input();
    //     S[i].solve();
    // }
    Solution S;
    S.input();
    S.solve();
    return 0;
}