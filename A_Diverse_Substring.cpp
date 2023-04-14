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
    for(int i=0;i<n-1;++i)
    {
        if(s[i]!=s[i+1])
        {
            x = 1;
            cout << "YES" << endl<< s[i] << s[i+1];
            break;
        }
    }
    if(x==0)
    cout<<"NO";
    
    
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}