#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int s=0;s<w;++s)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        unordered_map<char,int> mp;
        for(int i=0;i<s1.length();++i)
        {
            mp.insert({s1[i],i+1});
        }
        vector<int> v;
        for(int i=0;i<s2.length();++i)
        {
            v.push_back(mp[s2[i]]);
        }
        int sum=0;
        for(int i=1;i<v.size();++i)
        {
            sum=sum+abs(v[i-1]-v[i]);
        }
        cout<<sum<<endl;
    }
}