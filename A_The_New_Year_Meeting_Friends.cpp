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
    vector<int> v(3);
    for(auto &i: v)
    cin>>i;
    sort(v.begin(),v.end(),greater<int>());
    int a=v[0]-v[1];
    int b=v[1]-v[2];
    cout<<a+b;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}