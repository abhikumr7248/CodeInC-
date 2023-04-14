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
        vector<int> t(n);
        t=v;
        sort(t.begin(),t.end(),greater<int>());
        int x=t[0];
        vector<int> ans;
        for(int i=0;i<n;++i)
        {
            if(v[i]==x)
            ans.push_back(i+1);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        cout<<ans[0]<<endl;
    }
}
