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
    vector<int> v;
    int x=0;
    while(n>0)
    {
        v.push_back(n%10);
        x++;
        n=n/10;
    }
    x--;
    reverse(v.begin(),v.end());
    vector<int> p;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]!=0)
        {
            int a = pow(10, x);
            p.push_back(v[i] * a);
        }
        x--;
    }
    cout<<p.size()<<endl;
    for(int i=0;i<p.size();++i)
    cout<<p[i]<<" ";
    cout<<endl;
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