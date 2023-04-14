#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v(n);
    for(auto & i: v)
    cin>>i;
    sort(v.begin(),v.end(),greater<int>());
    int i=0,c=0;
    while(m>0)
    {
        m=m-v[i];
        i++;
        c++;
    }
    cout<<c;
}