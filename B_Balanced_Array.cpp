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
    int x;
    cin>>x;
    if(x%4!=0)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        int si = 0, sj = 0;
        for(int i=1;i<=x;++i)
        {
            if(i%2==0)
            {
            cout<<i<<" ";
            si+=i;
            }
        }
        for(int j=1;j<x-2;++j)
        {
            if(j%2==1)
            {
            cout<<j<<" ";
            sj+=j;
            }
        }
        cout<<si-sj<<endl;


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