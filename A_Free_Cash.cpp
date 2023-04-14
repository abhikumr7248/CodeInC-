#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2;++j)
        {
            cin>>arr[i][j];
        }
    }
    map<pair<int,int>,int> mp;
    pair<int,int> p;
    for(int i=0;i<n;++i)
    {
        p.first=arr[i][0];
        p.second=arr[i][1];
        mp[p]++;
        
    }
    vector<int> v;
    for(auto &it: mp)
    {
        if(it.second>1)
        v.push_back(it.second);
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
    cout<<1;
    else
    cout<<v[v.size()-1]<<endl;
}