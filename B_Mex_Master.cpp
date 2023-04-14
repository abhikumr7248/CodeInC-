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
    int count=0,ac=0;
    for(int i=0;i<n;++i)
    {
        if(v[i]==0)
        count++;
        if(v[i]==1)
        ac++;
    }
    if(n%2==0 && count<=n/2)
    {
        cout<<0<<endl;
    }
    else if (n % 2 == 1 && count <= (n / 2)+1)
    {
        cout<<0<<endl;
    }
    else
        {
        if(ac+count==n && count>ac && ac!=0 && count!=0)
        {
            cout<<2<<endl;
        }
        else
        cout<<1<<endl;
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