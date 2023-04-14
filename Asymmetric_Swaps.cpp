#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n;
    cin>>n;
    int m=2*n;
    vector<int> v(m);
    for(auto &i: v)
    cin>>i;
    sort(v.begin(),v.end());
   /* vector<int> v1,v2;
    for(int i=0;i<n;++i)
    v1.push_back(v[i]);
    for(int i=n;i<m;++i)
    v2.push_back(v[i]);
    int x=v1[v1.size()-1]-v1[0];
    int y=v2[v2.size()-1]-v2[0];
    cout<<min(x,y)<<endl;*/
    int mini=v[m-1]-v[0];
    for(int i=0;i<=n;++i)
    {
        mini=min(mini,v[i+n-1]-v[i]);
    }
    cout<<mini<<endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}