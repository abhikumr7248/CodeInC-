#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int z=0;z<w;++z)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i: v)
        cin>>i;
        sort(v.begin(),v.end());
        vector<int> s;
        for(int i=1;i<n;++i)
        {
            s.push_back(abs(v[i-1]-v[i]));
        }
        sort(s.begin(),s.end());
        cout<<s[0]<<endl;
    }
}