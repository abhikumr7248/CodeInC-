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
    int l=-1,r=-1;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='1')
        {
            l=i+1;
            break;
        }
    }
    for(int i=s.length()-1;i>=0;--i)
    {
        if (s[i] == '1')
        {
            r = i+1;
            break;
        }
    }
    int ans=n,k;
    if(l!=-1)
    {
    int t=2*(r-l+1);
    int p=2*max(l-1,n-r);
    k=t+p;
    ans=max(ans,k);
    }
    cout<<ans<<endl;
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