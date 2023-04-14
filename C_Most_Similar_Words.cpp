#include<bits/stdc++.h>
using namespace std;
int valu(string &a, string &b)
{
    int val = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        val += abs(a[i] - b[i]);
    }
    return val;
}
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n,m;
        cin>>n>>m;
        vector<string> s;
        string s1;
        for(int j=0;j<n;++j)
        {
            cin>>s1;
            s.push_back(s1);
            s1.clear();
        }
        int ans=INT_MAX;
        for(int p=0;p<n;++p)
        {
            for(int q=p+1;q<n;++q)
            {
                int temp=valu(s[p], s[q]);
                ans=min(ans,temp);
            }
        }
        cout<<ans<<endl;
    }
}