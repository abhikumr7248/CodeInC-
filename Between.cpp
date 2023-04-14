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
//const ull inf=2e18;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n);
    for(int i=0;i<m;++i)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        g[b].push_back(a);
    }
    vector<int> d(n,INT_MAX);
    vector<int> p(n,-1);
    d[0]=0;
    queue<int> q; 
    q.push(0);
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int to: g[v])
        {
            if(d[to]>d[v]+1)
            {
                d[to]=d[v]+1;
                p[to]=v;
                q.push(to);
            }
        }
    }
    bool was=false;
    for(int i=1;i<n;++i)
    {
        if(p[i]==-1)
        {
            was=true;
        }
    }
    if(was)
    {
        cout<<"INFINITE"<<endl;
    }
    else
    {
        cout<<"FINITE"<<endl;
        int max_d=0;
        for(int i=0;i<n;++i)
        {
            max_d=max(max_d,d[i]);
        }
        vector<vector<int>> where(max_d+1);
        for(int i=0;i<n;++i)
        {
            where[d[i]].push_back(i);
        }
        vector<int> ans;
        for(int j=0;j<=max_d;++j)
        {
            for(int i=max_d;i>=j;--i)
            {
                for(int x: where[i])
                ans.push_back(x);
            }
        }
        cout<<ans.size()<<endl;
        for(int x:ans)
        {
            cout<<x+1<<' ';
        }
        cout<<endl;
    }
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