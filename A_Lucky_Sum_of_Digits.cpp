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
    vector<int> ans;
    while(n>0)
    {
        if (n % 7 == 0)
        {
            
                ans.push_back(7);
                n=n-7;
            
        }
        else if(n%4==0)
        {
            
                ans.push_back(4);
                n=n-4;
            
        }
        else
        {
            ans.push_back(7);
            n=n-7;
        }
    }
    if(n==0)
    {
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();++i)
    cout<<ans[i];
    }
    if(n<0)
    cout<<-1;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}