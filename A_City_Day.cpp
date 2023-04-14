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
    int n,x,y,a,b,p;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    for(int i=0;i<n;++i)
    {
        p=0;
        a=i-x;
        b=i+y;
        if(a<0 && b<n)
        {
            a=0;
        }
        if(a>=0  && b>=n)
        {
            b=n-1;
        }
        if(a<0 && b>=n)
        {
            a=0;
            b=n-1;
        }
        //cout<<a<<" "<<b<<endl;
        for (int j = a; j <=b; ++j)
        {
            if (v[j] < v[i])
            {
                p = 1;
                break;
            }
        }
        if(p==0)
        {
        cout<<i+1;
        break;
        }
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}