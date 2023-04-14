#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(auto &i: a)
        cin>>i;
        for(auto &i: b)
        cin>>i;
        int s=k;
        multimap<int,int> mp;
        for(int i=0;i<n;++i)
        {
            mp.insert({a[i],b[i]});
        }
        for(auto &it: mp)
        {
            if(k>=it.first)
            k=k+it.second;
            else
            break;
        }
        cout<<k<<endl;
    }
}