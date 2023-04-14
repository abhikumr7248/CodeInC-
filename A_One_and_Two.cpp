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
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    /*ll m=1;
    for(int i=0;i<n;++i)
    m=m*v[i];
    ll ans=1;
    int k=0;
    for(int i=0;i<n;++i)
    {
        m=m/v[i];
        ans=ans*v[i];
        k++;
        if(ans==m)
        break;
    }
    if(k==n)
    cout<<-1<<endl;
    else
    cout<<k<<endl;*/
    int count=0,m=0;
    for(int i=0;i<n;++i)
    {
        if(v[i]==2)
        count++;
    }
    if(count%2!=0)
    cout<<-1<<endl;
    else
    {
        count=count/2;
        for(int i=0;i<n;++i)
        {
            if(v[i]==2)
            m++;
            if(m==count)
            {
                cout<<i+1<<endl;
                break;
            }
        }
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