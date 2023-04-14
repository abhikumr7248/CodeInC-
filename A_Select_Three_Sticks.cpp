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
        sort(v.begin(),v.end());
        vector<int> d;
        for(int i=1;i<n;++i)
        {
            d.push_back(v[i]-v[i-1]);
        }
        vector<int> s;
        for(int i=1;i<n-1;++i)
        {
            s.push_back(d[i-1]+d[i]);
        }
        sort(s.begin(),s.end());
        cout<<s[0]<<endl;
    }
}