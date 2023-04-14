#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int q=0;q<w;++q)
    {
        int x,y;
        cin>>x>>y;
        vector<int> v1(x);
        vector<int> v2(x);
        for(auto &i:v1)
        cin>>i;
        for(auto &i:v2)
        cin>>i;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());
        vector<int> s1;
        for(int i=0;i<x;++i)
        s1.push_back(v1[i]+v2[i]);
        int g=0;
        for(int i=0;i<x;++i)
        {
            if(s1[i]>y)
            {
                g=1;
                break;
            }
        }
        if(g==1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
        
    }
}