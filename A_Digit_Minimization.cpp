#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        long long x;
        cin>>x;
        vector<int> v;

        while(x>0)
        {
            v.push_back(x%10);
            x=x/10;
        }
        if(v.size()>2)
        {
            sort(v.begin(),v.end());
            cout<<v[0]<<endl;
        }
        else
        {
            reverse(v.begin(),v.end());
            cout<<v[v.size()-1]<<endl;
        }
    }
}