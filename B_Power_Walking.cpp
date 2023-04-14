#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin>>t;
    for(int p=0;p<t;++p)
    {
        /*int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        cin>>a[i];
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;++i)
        {
            ans.push_back(a[i]);
        }
        for (auto &x : ans)
            mp[x]++;
        multimap<int,int> mmp;
        for(auto & it: mp)
        {
            mmp.insert({it.second,it.first});
        }
        for(int k=1;k<=n;++k)
        {
            
            cout<<mp.size()+(k-1)<<" ";
            ans.pop_back();
            mp.clear();
        }
        cout<<endl;*/
        int n;
        cin >> n;
        map<int, int> d;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            d[x]++;
        }
        int cnt = d.size();
        /*for (auto i : d)
        {
            ++cnt;
        }*/
        int cur_cnt = cnt;
        for (int k = 1; k <= n; ++k)
        {
            cout << max(k, cnt) << " ";
        }
        cout<<endl;
    }
 }