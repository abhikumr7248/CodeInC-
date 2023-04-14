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
    int n,k;
    cin>>n>>k;
    string x,y;
    cin>>x;
    cin>>y;
    map<char,int> mp;
    for(int i=0;i<n;++i)
    {
        if(x[i]!=y[i])
        {
            mp[x[i]]++;
            if(mp.size()<k+1)
            {
                
                x[i]=y[i];
            }
        }
    }
    for(int i=0;i<n;++i)
    cout<<x[i]<<' ';
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