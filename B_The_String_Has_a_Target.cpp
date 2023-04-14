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
    // cin>>n;
    // string s;
    // cin>>s;
    // string p=s;
    // sort(p.begin(),p.end());
    // int i;
    // for(i=0;i<n;++i)
    // {
    //     if(s[i]<p[i])
    //     break;
    // }
    // string temp;
    // temp.push_back(s[i]);
    // for(int j=1;j<i;++j)
    // {
    //     temp.push_back(s[j]);
    // }
    // temp.push_back(s[0]);
    // for (int j = i+1; j < n; ++j)
    // {
    //     temp.push_back(s[j]);
    // }
    // for(int k=0;k<n;++k)
    // cout<<temp[k];
    // cout<<endl;
    int n;
    string s;
    cin >> n >> s;
    char smallest = 'z';
    int pos = 0;
    for (int i = n - 1; i > 0; --i)
    {
        if (s[i] < smallest)
        {
            smallest = s[i], pos = i;
        }
        if (s[i] == 'a')
        {
            smallest = s[i], pos = i;
            break;
        }
    }
    if (pos != 0)
    {
        if (smallest <= s[0])
        {
            s.erase(pos, 1);
            cout << smallest + s <<endl;
        }
        else
            cout << s <<endl;
    }
    else
        cout << s <<endl;
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