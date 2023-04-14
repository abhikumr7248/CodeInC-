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
    int sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        if(s[0]=='I')
        sum+=20;
        else if(s[0]=='C')
        sum+=6;
        else if(s[0]=='T')
        sum+=4;
        else if(s[0]=='D')
        sum+=12;
        else if(s[0]=='O')
        sum+=8;
    }
    cout<<sum;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}