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
    /*int n,m,a[1000100],b[1000100];
    priority_queue<int> q;
    priority_queue<int,vector<int>,greater<int>> q1;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        q1.push(a[i]);
    }
    for(int i=1;i<=m;++i)
    {
        cin>>b[i];
        q1.pop();
        q1.push(b[i]);
    }
    ll sum=0;
    while(!q1.empty())
    {
        sum+=q1.top();
        q1.pop();
    }
    cout<<sum<<endl;*/
    ll n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        pq.push(t);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        pq.pop();
        pq.push(t);
    }
    ll sum = 0;
    while (!pq.empty())
    {
        sum += (ll)pq.top();
        pq.pop();
    }
    cout << sum << endl;
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