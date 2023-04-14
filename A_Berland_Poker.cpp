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
    int n,m,k;
    cin>>n>>m>>k;
    int r=n/k;
    if(n==k)
    {
        if(m==1)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    else if(m<=r)
    cout<<m<<endl;
    else
    {
        int x=m-r;
        k=k-1;
        if(x<=k)
        cout<<r-1<<endl;
        else
        {
            int p=x/k;
            //cout<<r<<p<<endl<<endl;
            if(x%k==0)
            cout<<r-p<<endl;
            else
            cout<<r-(p+1)<<endl;
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