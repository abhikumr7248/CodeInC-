#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i:v)
        cin>>i;
        unordered_map<int,int> mp;
        for(auto &x: v)
        mp[x]++;
        int x=0;
        for(auto &it: mp)
        {
            if(it.second>1)
            {
                cout<<"NO"<<endl;
                x=1;
                break;
            }
        }
        if(x==0)
        cout<<"YES"<<endl;
    }
}