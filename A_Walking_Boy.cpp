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
    /*int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    {
        cin>>i;
    }
    v.push_back(1440);
    int count=0;
    for(int i=0;i<v.size()-1;++i)
    {
        int x=abs(v[i]-v[i+1]);
        int d=x/120;
        //cout<<d<<" ";
        count+=d;
    }
    //cout<<endl;
    int z=v[v.size()-1];
    int y=1440-z;
    int k=y/120;
    count+=k;
    if(count>=2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;*/
    int n;
    cin >> n;
    int p[n+2];
    for (int i = 1; i <= n; i++)
        cin>>p[i];
    p[0] = 0, p[n + 1] = 1440;
    int cnt = 0;
    for (int i = 1; i <= n + 1; i++)
        cnt += (p[i] - p[i - 1]) / 120;
    if (cnt >= 2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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