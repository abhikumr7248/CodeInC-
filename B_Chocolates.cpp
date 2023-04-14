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
    ull sum=v[v.size()-1];
    for(int i=v.size()-2;i>=0;--i)
    {
        if(v[i+1]==0)
        {
            v[i]=0;
        }
        else if(v[i]>=v[i+1])
        {
        v[i]=v[i+1]-1;
        }
        sum+=v[i];
    }
    cout<<sum;

}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}