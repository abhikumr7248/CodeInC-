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
    int n,m;
    cin>>n>>m;
    vector<int> v;
    if(n%2==0)
    {
        for (int i = 1; i <= n/2; ++i)
        {
            v.push_back(n-i+1);
            v.push_back(i);
        }
    }
    else
    {
        int z=n/2;
        for (int i = 1; i <=z; ++i)
        {
            v.push_back(n - i + 1);
            v.push_back(i);
        }
        v.push_back(z+1);
    }
    for(int i=0;i<v.size();++i)
    cout<<v[i]<<" ";
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