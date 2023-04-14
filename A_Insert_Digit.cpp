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
    // int n;
    // char d;
    // cin>>n>>d;
    // string s,t;
    // cin>>s;
    // char tt=*max_element(s.begin(),s.end());
    // char ss=*min_element(s.begin(),s.end());
    // int x=0;
    // if(d<=ss)
    // {
    //     t=s;
    //     t.push_back(d);
    // }
    // else if(d>=tt)
    // {
    //     t=s;
    //     reverse(t.begin(),t.end());
    //     t.push_back(d);
    //     reverse(t.begin(),t.end());
    // }
    // else
    // {
    //     for(int i=0;i<n;++i)
    //     {
    //         if(s[i]<=d && x==0)
    //         {
    //             t.push_back(d);
    //             x=1;
    //         }
    //         t.push_back(s[i]);
    //     }
    // }
    // for(int j=0;j<=n;++j)
    // cout<<t[j];
    // cout<<endl;
    int n, d;
    string s;
    cin >> n >> d >> s;
    int found = n;
    for (int i = 0; i < n; ++i)
    {
        if (d > (s[i] - '0'))
        {
            found = i;
            break;
        }
    }
    for (int i = 0; i < found; ++i)
        cout << s[i];
    cout << d;
    for (int i = found; i < n; ++i)
        cout << s[i];
    cout << endl;
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