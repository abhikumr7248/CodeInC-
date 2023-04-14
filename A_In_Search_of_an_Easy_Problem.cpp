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
    for(auto & i : v)
    cin>>i;
    int x=0;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]==1)
        {
        x=1;
        break;
        }
    }
    if(x==0)
    cout<<"EASY";
    else
    cout << "HARD";
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}