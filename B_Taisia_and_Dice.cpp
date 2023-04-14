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
    /*int n,s,r,g,v,k,p;
    cin>>n>>s>>r;
    v=n-1;
    g=r/v;
    k=r-g;
    if(n>2)
    {
        v = v - 1;
        p = k / v;
    }
    
    //cout<<p<<endl;
    vector<int> ans;
    ans.push_back(s - r);
    ans.push_back(g);
    if(n>2)
    {
    for(int i=0;i<v;++i)
    ans.push_back(p);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();++i)
    cout<<ans[i]<<" ";
    cout<<endl;*/
    int n, s, r;
    cin >> n >> s >> r;
    int q = s - r;
    n--;
    vector<int> a;
    a.push_back(q);
    while (r > n)
    {
        a.push_back(min(q, r - (n - 1)));
        n--;
        r =r-a[a.size()-1];
    }
    while (n--)
        a.push_back(1);
    for(int i=0;i<a.size();++i)
    cout<<a[i]<<" ";
    cout<<endl;
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