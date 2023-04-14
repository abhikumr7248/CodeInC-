#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    vector<int> p=v;
    sort(p.begin(),p.end());
    int a=p[0];
    int b=p[p.size()-1];
    int small,big;
    for(int i=0;i<v.size();++i)
    {
        if(a==v[i])
        {
            small=i;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (b == v[i])
        {
            big = i;
            break;
        }
    }
    if(small>big)
    cout<<big+n-1-small;
    else if(big>small)
    cout<<big+n-1-small-1;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}