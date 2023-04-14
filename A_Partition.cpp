#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];
    vector<int>b,c;
    for(int i=0;i<n;++i)
    {
        if(a[i]<0)
        b.push_back(a[i]);
        else
        c.push_back(a[i]);
    }int sumb=0;
    int sumc=0;
    for(int i=0;i<b.size();++i)
    sumb+=b[i];
    for(int i=0;i<c.size();++i)
    sumc+=c[i];
    cout<<sumc-sumb;
}