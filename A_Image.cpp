#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rn;
    cin>>rn;
    for(int t9=0;t9<rn;++t9)
    {
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        unordered_map<char,int> mp;
        for(auto &x : s1)
        mp[x]++;
        for(auto &y: s2)
        mp[y]++;
        if(mp.size()==1)
        cout<<0<<endl;
        else if(mp.size()==2)
        cout<<1<<endl;
        else if(mp.size()==3)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    }
}