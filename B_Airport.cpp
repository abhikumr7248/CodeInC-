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
    vector<int> v(m);
    for(auto &i: v)
    cin>>i;
    int maxi=0,mini=0;
    int k=n;
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<m;++i)
    {
        minh.push(v[i]);
        maxh.push(v[i]);
    }
    while(k>0)
    {
        mini+=minh.top();
        int x=minh.top();
        minh.pop();
        x--;
        if(x>0)
        minh.push(x);
        k--;
    }
    int g=n;
    while(g>0)
    {
        maxi += maxh.top();
        int x = maxh.top();
        maxh.pop();
        x--;
        if(x>0)
        maxh.push(x);
        g--;
    }
    cout<<maxi<<" "<<mini<<endl;
    

}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
        solve();
    return 0;
}