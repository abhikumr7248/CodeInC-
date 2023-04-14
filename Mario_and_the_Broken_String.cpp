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
    string s;
    cin>>s;
    int z=n/2;
    string a,b;
    for(int i=0;i<z;++i)
    a.push_back(s[i]);
    for(int i=z;i<n;++i)
    b.push_back(s[i]);
    if(a==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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