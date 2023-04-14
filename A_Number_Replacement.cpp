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
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<n-1;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                if(s[i]!=s[j] && v[i]==v[j])
                {
                    cout<<"NO"<<endl;
                    x = 1;
                    break;
                }
            }
            if (x == 1)
                break;
        }
        if(x==0)
        cout<<"YES"<<endl;
    }
}