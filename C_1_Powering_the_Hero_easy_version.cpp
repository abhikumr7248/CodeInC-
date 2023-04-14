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
    ull n;
    cin>>n;
    vector<ull> v(n);
    for(auto &i: v)
    cin>>i;
    priority_queue<ull> maxh;
    ull sum=0;
    for(ull i=0;i<n;++i)
    {
        if(v[i]==0)
        {
            if(maxh.size()>0)
            {
                sum+=maxh.top();
                maxh.pop();
            }
        }
        else
        maxh.push(v[i]);
    }
    cout<<sum<<endl;
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