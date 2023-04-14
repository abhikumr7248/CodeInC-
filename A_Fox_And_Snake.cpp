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
    cin>>n>>m;
    for(int i=0;i<m;++i)
    cout<<"#";
    cout<<endl;
    for(int i=1;i<n;i=i+2)
    {
        for (int j = 0; j < m-1; ++j)
            cout << ".";
        cout<<"#";
        cout << endl;
        for (int j = 0; j < m; ++j)
            cout << "#";
        cout << endl;
        if(i<n-2)
        {
            cout << "#";
            for (int j = 1; j < m ; ++j)
                cout << ".";
            
            cout << endl;
            for (int j = 0; j < m; ++j)
                cout << "#";
            cout << endl;
            i=i+2;
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