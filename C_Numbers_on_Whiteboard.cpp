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
    /*queue<int> q;
    priority_queue<int> pq;
    vector<int> v;
    for(int i=1;i<=n;++i)
    v.push_back(i);
    
    for(int i=v.size();i>=0;--i)
    {
        if(v[i]%2==0)
        {
            pq.push(v[i-1]);
            int x=v[i-2];
            pq.push((x+v[i])/2);
            q.push(v[i-2]);
            q.push(v[i]);
            v.pop_back();
            v.pop_back();
            v.pop_back();
            i=i-3;
        }
        else
        pq.push(v[i]);
    }
    int ans;
    while(pq.empty()==false)
    {
        if(pq.size()==1)
        {
            ans=pq.top();
            pq.pop();
        }
        int y=pq.top();
        q.push(y);
        pq.pop();
        int z=pq.top();
        q.push(z);
        pq.pop();
        pq.push((y+z)/2);
    }
    cout<<ans<<endl;*/
    cout << 2 <<endl;

    cout << n << ' ' << n - 1 << endl;
    for (int i = n; i > 2; --i)
    {
        cout << i << ' ' << i - 2 << endl;
    }
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