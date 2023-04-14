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
    string s;
    cin>>s;
    int x=0;
    int y=0;
    int z=0;
    for(int i=0;i<s.length();++i)
    {
        if(islower(s[i]))
        x++;
    }
    if(islower(s[0]))
    y++;
    for(int i=1;i<s.length();++i)
    {
        if(islower(s[i]))
        z++;
    }
    if(x==0)
    {
        for(int i=0;i<s.length();++i)
        s[i]=s[i]+32;
    }
    else if(y==1 && z==0)
    {
        s[0]=s[0]-32;
        for(int i=1;i<s.length();++i)
        s[i]=s[i]+32;
    }
    //cout<<x<<" "<<y;
    for(int i=0;i<s.length();++i)
    cout<<s[i];
    
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}