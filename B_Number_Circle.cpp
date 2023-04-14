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
    cin>>i;
    sort(v.begin(),v.end());
    vector<int> t;
    for(int i=0;i<n/2;++i)
    {
        t.push_back(v[n-(i+1)]);
        t.push_back(v[i]);
    }
    if(n%2!=0)
    t.push_back(v[n/2]);
    for(int i=0;i<n;++i)
    cout<<t[i]<<" ";*/
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[n - 1] >= a[n - 2] + a[n - 3])
    {
        cout << "NO"<<endl;
    }
    else
    {
    cout << "YES"<<endl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << a[i] << ' ';
    }
    cout << a[n - 1] << ' ' << a[n - 2] <<endl;
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        solve();
    return 0;
}