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
    string s;
    cin>>s;

    for(int i=0;i<n;++i)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            char t = s[i];
            char p;
            if (i == 0)
               p = '0';
            else
            {
                if(s[i-1]=='1')
                p='0';
                else if(s[i-1]=='0')
                p='1';
            }
            for (int j = i; j < n; ++j)
            {
                
                if(t==s[j])
                s[j]=p;
                
            }
        }

    }
    // for(int i=0;i<n;++i)
    // cout<<s[i]<<" ";
    // cout<<endl;
    int y=0;
    if(s.size()==2)
    {
        if(s[0]!=s[1])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=1;i<n-1;++i)
        {
            if(s[i-1]==s[i] || s[i+1]==s[i])
            {
            cout<<"NO"<<endl;
            y=1;
            break;
            }
        }
        if(y==0)
        cout<<"YES"<<endl;
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