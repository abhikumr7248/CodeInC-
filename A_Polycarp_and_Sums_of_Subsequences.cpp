#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        vector<ull> v(7);
        for(auto &i: v)
        cin>>i;
        sort(v.begin(),v.end());
        ull sum;
        sum=v[0]+v[1];
        sum=v[6]-sum;
        cout << v[0]<<" "<<sum<<" "<< v[1] << endl;
    }
}