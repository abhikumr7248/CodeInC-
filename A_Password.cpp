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
        for(auto &i: v)
        cin>>i;
        map<int,int> mp;
        for(auto &x: v)
        mp[x]++;
        int a;
        a=10-mp.size();
        int sum=0;
        for(int i=1;i<a;++i)
        sum+=i;
        cout<<sum*6<<endl;

    }
}