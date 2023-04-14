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
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    /*vector<int> temp;
    temp=v;
    sort(temp.begin(),temp.end());
    int ans=0;
    while(temp!=v)
    {
        int x=k;
        while(x>0)
        {
            vector<int> t;
            t=v;
            sort(t.begin(),t.end());
            int z=t[t.size()-1];
            for(int i=0;i<v.size();++i)
            {
                if(v[i]==z)
                {
                    v.erase(v.begin()+i-1);
                }
                v.push_back(z);
            }
            x--;
        }
        ans++;
    }
    cout<<ans<<endl;*/
    /*int c=0,d,g=1;
    for(int i=0;i<n;++i)
    {
        if(v[i]==1)
        d=i;
    }
    for(int i=d;i<n;++i)
    {
        if(g==v[i])
        c++;
        g++;
    }
    int z=n-c;
    int p=z/k;
    if(z%k!=0)
    p+=1;
    cout<<p<<endl;*/
    ll x=1,ans=0;
    for(int i=0;i<n;++i)
    {
        if(v[i]==x)
        x++;
        else
        ans++;
    }
    cout<<(ans+k-1)/k<<endl;
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