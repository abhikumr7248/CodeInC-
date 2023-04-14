#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rn;
    cin >> rn;
    for (int t9 = 0; t9 < rn; ++t9)
    {
        int n,m;
        cin>>n>>m;
        string s1;
        string s2;
        cin>>s1>>s2;
        unordered_map<char,int> mp;
        for(auto &x: s1)
        mp[x]++;
        int f=0;
        for(int i=0;i<m;++i)
        {
            if(mp.find(s2[i])==mp.end())
            {
                
                
                f++;
                
            }
        }
        if(f==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}