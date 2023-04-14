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
        sort(v.begin(),v.end());
        double sum=0.0;
        for(int i=0;i<n-1;++i)
        sum=sum+v[i]; 
        sum=double(sum/(n-1));
        cout<<fixed<<setprecision(9)<<sum+v[v.size()-1]<<endl;
    }
}