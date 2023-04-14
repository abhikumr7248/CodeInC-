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
    string s;
    cin>>s;
    int x=0;
    for(int i=0;i<n/2;++i)
    {
        /*cout<<s[i]+1<<endl;
        if ((s[i] - 1 == s[n - (i + 1)] - 1) || (s[i] + 1 == s[n - (i + 1)] - 1) || (s[i] - 1 == s[n - (i + 1)] + 1) || (s[i]+1 == s[n - (i + 1)]+1))
            x++;
        else
        break;*/
        int k = abs(s[i] - s[n - i - 1]);
        if (k > 2 || k % 2 == 1)
        {
            cout<<"NO"<<endl;
            x=1;
            break;
        }
    }   
    //cout<<x<<endl;
    if(x==0)     
    cout<<"YES"<<endl;
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