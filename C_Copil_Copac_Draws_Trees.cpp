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
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
class Solution
{
private:
//1
void sw(int& aa, int& bb)
{
    aa^= bb^= aa^=bb;
}
//2
void ul(char& aa)
{
    aa=aa^32;
}
//3
bool eq(int aa, int bb)
{
    if(!(aa^bb))
    return true;
    else
    return false;
}
//4
int max3(int aa,int bb,int cc)
{
    int maxi=aa;
    (maxi<bb) && (maxi=bb);
    (maxi<cc) && (maxi=cc);
    return maxi;
}
//5
int min3(int aa, int bb, int cc)
{
    int mini = aa;
    (mini > bb) && (mini = bb);
    (mini > cc) && (mini = cc);
    return mini;
}
//6
int isPowerOf2(int aa)
{
    return (aa && !(aa & (aa-1)));
}
// int n,x,y;
// map<int,vector<int>> adj;
// map<pair<int,int>,int> edge_pos;
// vector<int> cnt ,val;
// deque<int> bfs;
int n;
vector<pair<int, int>> v;

public : 
void input()
{
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
    }
    // cin >> n;
    // for (int i = 1; i < n; ++i)
    // {
    // cin >> x >> y;
    // adj[x].push_back(y);
    // adj[y].push_back(x);
    // edge_pos[{x, y}] = edge_pos[{y, x}] = i;
    // }
    // cnt.resize(n+1);
    // val.resize(n+1);
    }
    void solve()
    {
        // int ans=1;
        // vector<bool> vis(n+1,false);
        // bfs.push_back(1);
        // vis[1]=true;
        // val[1]=0;
        // cnt[1]==0;
        // while(bfs.size()>0)
        // {
        //     x=bfs.front();
        //     for(auto &it: adj[x])
        //     {
        //         if(!vis[it])
        //         {
        //             vis[it]=true;
        //             if(edge_pos[{it,x}]>val[x])
        //             cnt[it]=cnt[x];
        //             else
        //             cnt[it]=cnt[x]+1;
        //             val[it]=edge_pos[{it,x}];
        //             ans=max(ans,cnt[it]);
        //             bfs.push_back(it);
        //         }
        //     }
        //     bfs.pop_front();
        // }

        // cout<<ans+1<<endl;

    vector<int> degree(n + 1, 0);
    for (const auto &p : v)
    {
    degree[p.first]++;
    degree[p.second]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
    if (degree[i] == 1)
    {
        ans++;
    }
    }
    cout << ans << endl;
    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Solution S[n];
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}