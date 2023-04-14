#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int> v;
    unordered_map<int,int> mp;
    for(int i=x+1;;i++)
    {
        int t=i;
        int p;
        while(t>0)
        {
            v.push_back(t%10);
            t=t/10;
        }
        reverse(v.begin(),v.end());
        for(auto & x: v)
        mp[x]++;
        if(mp.size()==4)
        {
            for(int k=0;k<v.size();++k)
            cout<<v[k];

            break;
        }
        mp.clear();
        v.clear();

    }
}