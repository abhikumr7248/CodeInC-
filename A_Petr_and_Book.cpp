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
    vector<int> v(7);
    for(auto &i: v)
    cin>>i;
    int sum=0;
    int x;
    while(sum<n)
    {
        x = 0;
        for(int i=0;i<7;++i)
        {
            sum+=v[i];
            x++;
            if(sum>=n)
            {
                cout<<x;
                break;
            }
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