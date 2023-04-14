#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        vector<int> v(3);
        for(auto &i:v)
        cin>>i;
        sort(v.begin(),v.end());
        if(v[0]+v[1]==v[2])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}