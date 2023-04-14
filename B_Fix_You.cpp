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
    int n,m;
    int c=0;
    cin>>n>>m;
    char mat[n][m];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n-1;++i)
    {
        if(mat[i][m-1]=='R')
        c++;
    }
    for(int j=0;j<m-1;++j)
    {
        if(mat[n-1][j]=='D')
        c++;
    }
    cout<<c<<endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}