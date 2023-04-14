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
    int res=0;
    int p=0;
    int mat[n][2];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2;++j)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;++i)
    {
        res = res - mat[i][0];
        res = res + mat[i][1];
        if (res > p)
            p = res;
    }
    cout<<p;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}