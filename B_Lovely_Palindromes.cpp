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
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i)
    cout<<s[i];
    for(int i=s.length()-1;i>=0;--i)
    cout<<s[i];
    cout<<endl;
    /*ull n;
    cin>>n;
    if(n<10)
    cout<<n*11<<endl;
    else
    {
        ull x=n-10;
        ull t=x*10;
        ull p=91+t;
        cout<<p*11<<endl;
    }*/
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