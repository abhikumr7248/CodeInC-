#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> v1;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        v1.push_back(s);
        s.clear();
    }
    unordered_map<string,int> mp;
    for(auto &x:v1)
    mp[x]++;

    int count=-1;

    for(auto &it:mp)
    {
        count=max(count,it.second);
    }
    for(auto & ot: mp)
    {
        if(ot.second==count)
        cout<<ot.first;
    }


}